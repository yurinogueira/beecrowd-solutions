#include <stdio.h>

char check[] = {'c', 'o', 'b', 'o', 'l'};

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int getFim(char string[], int i) {
    for (i = i; i < strlen(string); i++) {
        if (string[i] == '-') {
            return i;
        }
    }
    return i;
}

void isCobol(int cobol[], char string[], int indice, int n) {

    int lastIndice = indice + 1;
    indice = getFim(string, lastIndice);

    if (toLowerCase(string[lastIndice]) == check[n] || toLowerCase(string[indice - 1]) == check[n]) {
        cobol[n] = 1;
    }

    if (n < 5) {
        isCobol(cobol, string, indice, n + 1);
    } 

}

int main() {

    int i, grace;
    int cobol[5];
    char string[51];

    while (scanf(" %[^\n]", string) != EOF) {

        for (i = 0; i < 5; i++) cobol[i] = 0;
        
        isCobol(cobol, string, -1, 0);

        grace = 1;
        for (i = 0; i < 5; i++) {
            if (cobol[i] == 0) {
                grace = 0;
                break;
            }
        }

        if (grace) {
            printf("GRACE HOPPER\n");
        } else {
            printf("BUG\n");
        }

    }

    return 0;

}
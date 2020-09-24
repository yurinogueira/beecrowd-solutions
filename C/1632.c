#include <stdio.h>
#include <string.h>

int contemNum(char letter) {
    char podeNum[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 's', 'S'};
    int i;
    for (i = 0; i < 10; i++) {
        if (letter == podeNum[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int vezes;
    int i;
    scanf("%d", &vezes);
    for (i = 0; i < vezes; i++) {
        char senha[16];
        scanf("%s", senha);
        int value = 1;
        int k;
        for (k = 0; k < strlen(senha); k++) {
            if (contemNum(senha[k])) {
                value = value * 3;
            } else {
                value = value * 2;
            }
        }
        printf("%d\n", value);
    }

    return 0;
}
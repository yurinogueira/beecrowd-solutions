#include <stdio.h>

int main() {

    int i, j, n;
    int maior, valor_maior;
    int mais_que1;
    int alfabeto[26];
    char palavra[201];

    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        for (j = 0; j < 26; j++) alfabeto[j] = 0;
        scanf("%200[^\n]", palavra);
        getchar();

        for (j = 0; j < strlen(palavra); j++) {
            if (palavra[j] >= 'A' && palavra[j] <= 'Z') {
                alfabeto[palavra[j] - 'A']++;
            }
            if (palavra[j] >= 'a' && palavra[j] <= 'z') {
                alfabeto[palavra[j] - 'a']++;
            }
        }

        valor_maior = -1;
        mais_que1 = 0;
        for (j = 0; j < 26; j++) {
            if (alfabeto[j] >= valor_maior) {
                maior = j;
                valor_maior = alfabeto[j];
            }
        }

        for (j = 0; j < 26; j++) {
            if (alfabeto[j] == valor_maior) {
                mais_que1++;
            }
        }

        if (mais_que1 > 1) {
            for (j = 0; j < 26; j++) {
                if (alfabeto[j] == valor_maior) {
                    printf("%c", (j + 97));
                }
            }
            printf("\n");
            continue;
        }

        printf("%c\n", (maior + 97));

    }

    return 0;
}
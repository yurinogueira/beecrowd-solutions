#include <stdio.h>

int main() {

    int i, j, indice, n;
    char palavra[53], result[53];

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        scanf("%53[^\n]", palavra);
        getchar();
        indice = 0;
        for (j = 0; j < strlen(palavra); j++) {
            if (j == 0) {
                if (palavra[j] >= 'a' && palavra[j] <= 'z') {
                    result[indice] = palavra[j];
                    indice++;
                }
            } else {
                if ((palavra[j] >= 'a' && palavra[j] <= 'z') && !(palavra[j - 1] >= 'a' && palavra[j - 1] <= 'z')) {
                    result[indice] = palavra[j];
                    indice++;
                }
            }
        }
        result[indice] = '\0';
        printf("%s\n", result);
    }

    return 0;
}
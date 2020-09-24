#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[1000];
    char finalsenha[1000];
    int i, k;
    int num, len;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf(" %[^\n]", senha);
        len = strlen(senha) ;
        for (k = 0; k < len; k++) {
            if ((senha[k] >= 'A' && senha[k] <= 'Z') || (senha[k] >= 'a' && senha[k] <= 'z')) {
                senha[k] = (senha[k] + 3);
            }
        }
        for (k = 0; k < len + 1; k++) {
            finalsenha[k] = senha[len - 1 - k];
        }
        for (k = (len / 2); k < len; k++) {
            finalsenha[k] = finalsenha[k] - 1;
        }
        printf("%s\n", finalsenha);
    }
    return 0;
}
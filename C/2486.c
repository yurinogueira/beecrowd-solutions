#include <stdio.h>
#include <string.h>

int main() {

    int t = 1, i;
    int result;
    int valor_atual;
    char str[20];

    while(t >=1 && t <= 7) {
        scanf("%d", &t);
        result = 0;
        valor_atual = 0;
        for (i = 0; i < t; i++) {
            scanf("%d %20[^\n]", &valor_atual, str);
            if (strcmp(str, "suco de laranja") == 0) {
                result += (valor_atual * 120);
            } else if (strcmp(str, "morango fresco") == 0) {
                result += (valor_atual * 85);
            } else if (strcmp(str, "mamao") == 0) {
                result += (valor_atual * 85);
            } else if (strcmp(str, "goiaba vermelha") == 0) {
                result += (valor_atual * 70);
            } else if (strcmp(str, "manga") == 0) {
                result += (valor_atual * 56);
            } else if (strcmp(str, "laranja") == 0) {
                result += (valor_atual * 50);
            } else if (strcmp(str, "brocolis") == 0) {
                result += (valor_atual * 34);
            }
        }
        if (result >= 110 && result <= 130) {
            printf("%d mg\n", result);
        } else if (result > 130) {
            printf("Menos %d mg\n", result - 130);
        } else if (result < 110 && result != 0) {
            printf("Mais %d mg\n", 110 - result);
        }
    
    }

    return 0;

}
#include <stdio.h>

int main() {

    char operacao;
    double matriz[12][12];
    double total;
    int i, j, k = 1;
    scanf("%c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i < 12; i++) {
        for (j = k; j < 12; j++) {
            total += matriz[i][j];
        }
        k++;
    }

    if (operacao == 'S') {
        printf("%.1lf\n", total);
    } else {
        printf("%.1lf\n", (total / 66.0));
    }

    return 0;

}

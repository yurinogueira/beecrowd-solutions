#include <stdio.h>
#include <math.h>

int main() {

    unsigned short n, j, k, l, c, len, dig[20];
    long long unsigned maior, matriz[20][20];

    scanf("%hu", &n);

    for (c = 0; c < n; c++) {

        scanf("%hu", &len);

        for (j = 0; j < len; j++) {
            for (k = 0; k < len; k++) {
                scanf("%llu", &matriz[j][k]);
                matriz[j][k] *= matriz[j][k];
            }
        }

        printf("Quadrado da matriz #%hu:\n", c + 4);

        for (j = 0; j < len; j++) {
            maior = 0;
            for (k = 0; k < len; k++) {
                if (matriz[k][j] > maior) {
                    maior = matriz[k][j];
                }
            }
            dig[j] = (int) ((floor(log10(maior))) + 1);
        }

        for (j = 0; j < len; j++) {
            for (k = 0; k < len; k++) {
				if (k != len && k != 0) {
                    printf(" ");
                }
                printf("%*llu", dig[k], matriz[j][k]);

            }
            printf("\n");
        }

        if (c + 1 != n) {
            printf("\n");
        }

    }

    return 0;

}
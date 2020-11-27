#include <stdio.h>
#include <math.h>

int main() {

    int n;
    while (scanf("%d", &n) != EOF && n != 0) {
        int matriz[n][n];
        matriz[0][0] = 1;
        for (int i = 1; i < n; i++) {
            matriz[0][i] = matriz[0][i - 1] * 2;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                matriz[j][i] = matriz[j - 1][i] * 2;
            }
        }

        int digits = (int) floor(log10(matriz[n - 1][n - 1]) + 1); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%*d", digits, matriz[i][j]);
                if (j + 1 != n) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

}
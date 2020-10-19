#include <stdio.h>

int main() {

    char operacao;
    double m[12][12];
    double total;
    int i, j, k = 1;
    scanf("%c", &operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    total = m[1][11] + m[2][10] + m[2][11] + m[3][9] + m[3][10] 
    + m[3][11] + m[4][8] + m[4][9] + m[4][10] + m[4][11] + m[5][7] 
    + m[5][8] + m[5][9] + m[5][10] + m[5][11] + m[6][7] + m[6][8] 
    + m[6][9] + m[6][10] + m[6][11] + m[10][11] + m[9][10] + m[9][11] 
    + m[8][9] + m[8][10] + m[8][11] + m[7][8] + m[7][9] + m[7][10] + m[7][11];

    if (operacao == 'S') {
        printf("%.1lf\n", total);
    } else {
        printf("%.1lf\n", (total / 144.0));
    }

    return 0;

}

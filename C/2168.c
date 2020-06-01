//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int matriz[101][101];
    int i = 1, soma, j, k, l, m;
    scanf("%d", &soma);
    i += soma;

    for (j = 0; j < i; j++) {
        for (k = 0; k < i; k++) {
            scanf("%d", &matriz[j][k]);
        }
    }

    for (l = 0; l < soma; l++) {
        for (m = 0; m < soma; m++) {
            if (matriz[l][m] + matriz[l+1][m] + matriz[l][m+1] + matriz[l+1][m+1] > 1) {
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}
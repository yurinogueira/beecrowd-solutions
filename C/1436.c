//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int equipe;
        scanf("%d", &equipe);
        int vetor[equipe];
        int j, k;

        for (j = 0; j < equipe; j++) {
            scanf("%d", &vetor[j]);
        }

        for (j = 0; j < equipe; j++) {
            for (k = 0; k < equipe; k++) {
                if (vetor[j] < vetor[k]) {
                    int salvar = vetor[j];
                    vetor[j] = vetor[k];
                    vetor[k] = salvar;
                }
            }
        }

        printf("Case %d: %d\n", (i + 1), vetor[equipe / 2]);

    }

    return 0;

}
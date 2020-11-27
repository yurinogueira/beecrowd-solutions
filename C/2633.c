#include <stdio.h>
#include <stdlib.h>

void quicksort(char **matriz, int vetor[], int first, int last) {
    char *frase;
    int i, j, pivot, temp;

    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        while (i < j) {
            while (vetor[i] <= vetor[pivot] && i < last) {
                i++;
            }
            while (vetor[j] > vetor[pivot]) {
                j--;
            }
            if (i < j) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;

                frase = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = frase;
            }
        }

        temp = vetor[pivot];
        vetor[pivot] = vetor[j];
        vetor[j] = temp;

        frase = matriz[pivot];
        matriz[pivot] = matriz[j];
        matriz[j] = frase;

        quicksort(matriz, vetor, first, j - 1);
        quicksort(matriz, vetor, j + 1, last);
    }
}

int main() {

    int n, i;
    while (scanf("%d", &n) != EOF) {
        char **matriz = (char**) malloc(sizeof(char*) * (n + 1));
        int vetor[n];
        for (i = 0; i < n; i++) {
            matriz[i] = (char*) malloc(sizeof(char) * 21);
            scanf("%s", matriz[i]);
            scanf("%d", &vetor[i]);
        }
        quicksort(matriz, vetor, 0, n - 1);
        for (i = 0; i < n; i++) {
            printf("%s", matriz[i]);
            if (i + 1 != n) {
                printf(" ");
            }
        }
        printf("\n");
        for (i = 0; i < n; i++) {
            free(matriz[i]);
        }
        free(matriz);
    }

    return 0;

}
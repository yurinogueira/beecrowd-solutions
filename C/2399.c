#include <stdio.h>

int main() {

    int n, i, c;
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n; i++) vetor[i] = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &c);
        if (c == 1) {
            if (i > 0) {
                vetor[i - 1]++;
            }
            vetor[i]++;
            if ((i + 1) != n) {
                vetor[i + 1]++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;

}
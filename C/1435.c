#include <stdio.h>

int hasNumber(int l, int c, int max) {

    int menor;

    menor = l;
    if ((max - l) < menor) menor = (max - l);
    if (c < menor) menor = c;
    if ((max - c) < menor) menor = (max - c);

    return menor + 1;

}

int main() {


    int n, i, j;

    while (1) {

        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if ((j + 1) < n) {
                    printf("%3d ", hasNumber(i, j, n - 1));
                } else {
                    printf("%3d", hasNumber(i, j, n - 1));
                }
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;

}

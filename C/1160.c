#include <stdio.h>

int main() {

    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        int a, b;
        int anos = 0;
        float c, d;
        scanf("%d %d %f %f", &a, &b, &c, &d);
        while (a <= b) {
            a += (a * c) / 100;
            b += (b * d) / 100;
            anos++;
            if (anos > 100) {
                break;
            }
        }
        if (anos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
    }

    return 0;

}

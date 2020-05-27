#include <stdio.h>

int main() {
    int a, b, c, d;
    double e, f;
    scanf("%d %d %lf", &a, &b, &e);
    scanf("%d %d %lf", &c, &d, &f);
    printf("VALOR A PAGAR: R$ %.2lf\n", (d * f) + (b * e));
    return 0;
}

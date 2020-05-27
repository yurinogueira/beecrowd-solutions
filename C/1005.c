#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("MEDIA = %.5lf\n", ((a * 3.5) + (b * 7.5)) / 11);
    return 0;
}

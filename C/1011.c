#include <stdio.h>

int main() {
    double pi = 3.14159;
    double a;
    scanf("%lf", &a);
    printf("VOLUME = %.3lf\n", (4.0/3.0) * (pi * (a * a * a)));
    return 0;
}

#include <stdio.h>

int main() {
    char a[120];
    double b, c;
    scanf("%s", a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("TOTAL = R$ %.2lf\n", b + (c * 0.15));
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    long long unsigned n;
    scanf("%llu", &n);
    printf("%.1lf %.1lf\n", (n / log(n)), (1.25506 * (n / log(n))));
}
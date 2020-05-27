#include <stdio.h>

int main() {
    double dis, comb;
    scanf("%lf", &dis);
    scanf("%lf", &comb);
    printf("%.3lf km/l\n", dis / comb);
    return 0;
}

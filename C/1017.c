#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%.3f\n", ((double)(a * b) / 12));
    return 0;
}
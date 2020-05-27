#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int n_100 = a / 100;
    printf("%d nota(s) de R$ 100,00\n", n_100);
    int n_50 = (n_100 * 100) - 50;
    if (n_50 >= 50) {
        n_50 = n_50 - 50;
        printf("%d nota(s) de R$ 100,00\n", 1);
    } else {
        printf("0 nota(s) de R$ 50,00\n");
    }
    int n_20 = n_50 - 20;
    printf("%d nota(s) de R$ 100,00\n", a / 100);
    return 0;
}
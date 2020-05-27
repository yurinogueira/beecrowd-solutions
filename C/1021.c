#include <stdio.h>

int main() {

    double moneyTotal;
    scanf("%lf", &moneyTotal);

    int a = moneyTotal;
    double b = moneyTotal - a;

    int n100 = a / 100;
    int v100 = n100 * 100;
    int n50 = (a - v100) / 50;
    int v50 = n50 * 50;
    int n20 = (a - v100 - v50) / 20;
    int v20 = n20 * 20;
    int n10 = (a - v100 - v50 - v20) / 10;
    int v10 = n10 * 10;
    int n5 = (a - v100 - v50 - v20 - v10) / 5;
    int v5 = n5 * 5;
    int n2 = (a - v100 - v50 - v20 - v10 - v5) / 2;
    int v2 = n2 * 2;
    int n1 = a - v100 - v50 - v20 - v10 - v5 - v2;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);

    int m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

    while (1) {
        if (b >= 0.50) {
            m50 += 1;
            b -= 0.50;
        } else if (b >= 0.25) {
            m25 += 1;
            b -= 0.25;
        } else if (b >= 0.10) {
            m10 += 1;
            b -= 0.10;
        } else if (b >= 0.05) {
            m5 += 1;
            b -= 0.05;
        } else if (b >= 0.009) {
            m1 += 1;
            b -= 0.01;
        } else {
            break;
        }
    }

    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;

}
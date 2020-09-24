#include <stdio.h>

int digitos(int num) {

    int digitos = 0;
    
    while (num != 0) {
        num = num / 10;
        digitos++;
    }
    
    return digitos;

}

int main() {

    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        int i;
        int casas = 0;
        for (i = n; i <= m; i++) {

            int dig1 = i % 10;
            int dig2 = i / 10;
            int dig3 = dig2 % 10;
            int dig4 = dig2 / 10;
            int dig5 = dig4 % 10;
            int dig6 = dig4 / 10;
            int dig7 = dig6 % 10;

            switch (digitos(i)) {
                case 1:
                    casas++;
                    break;
                case 2:
                    if (dig1 != dig3) casas++;
                    break;
                case 3:
                    if (dig1 != dig3 && dig1 != dig5 && dig3 != dig5) casas++;
                    break;
                default:
                    if (dig1 != dig3 && dig1 != dig5 && dig3 != dig5 && dig1 != dig7 && dig3 != dig7 && dig5 != dig7) casas++;
                    break;
            }
        }
        printf("%d\n", casas);
    }
    
    return 0;

}
#include <stdio.h>

int fujao(int n, int c) {
    if (n == 1) {
        return 1;
    }
    return (c - 1 + fujao(n - 1, c)) % n + 1;
}

int main() {

    int n, c, i;
    while (scanf("%d", &n) != 0) {
        if (n == 0) break;
        if (n < 13 || n > 100) continue;
        c = 1;
        while (1) {
            if (fujao(n - 1, c) == 12) {
                printf("%d\n", c);
                break;
            } else {
                c++;
            }
        }

    }

    return 0;

}
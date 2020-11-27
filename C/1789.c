#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int final = 0, temp;
        for (int i = 0; i < n; i++) {
            scanf("%d", &temp);
            if (temp > final) {
                final = temp;
            }
        }

        if (final >= 20) {
            printf("3\n");
        } else if (final >= 10) {
            printf("2\n");
        } else {
            printf("1\n");
        }
    }

    return 0;

}
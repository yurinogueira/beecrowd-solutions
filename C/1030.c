#include <stdio.h>

int fujao(int n, int c) {
    if (n == 1) {
        return 1;
    }
    return (c - 1 + fujao(n - 1, c)) % n + 1;
}

int main() {

    int casos;
    int i;
    int n, c;
    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d %d", &n, &c);
        printf("Case %d: %d\n", (i + 1), fujao(n, c));
    }

    return 0;

}
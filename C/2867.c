#include <stdio.h>
#include <math.h>

int main() {

    int num, i;
    int n, m;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", (int) floor(log10(pow(n, m))) + 1);
    }

    return 0;

} 
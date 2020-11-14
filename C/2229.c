#include <stdio.h>
#include <math.h>

int main() {
 
    int n, x = 1;
    while (scanf("%d", &n) != EOF && n != -1 && n <= 15 && n >= 0) {
        printf("Teste %d\n%d\n\n", x++, ((int) (pow(4, n) + (int) pow(2, n+1)) + 1));
    }
    
    return 0;
}
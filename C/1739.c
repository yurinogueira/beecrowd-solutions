#include <stdio.h>

int e3bonacci(long long n) {
    if (n % 3 == 0) return 1;
    while(n > 0) {
		if (n % 10 == 3) return 1;
		n = n / 10;
	}
    return 0;
}

int main() {

    int i, n;
    long long antianterior, anterior, fib;
    
    while (scanf("%d", &n) != EOF) {
        if (n >= 1 && n <= 60) {
            antianterior = 0;
            anterior = 1;
            while (1) {
                fib = anterior + antianterior;
                antianterior = anterior;
                anterior = fib;

                if (e3bonacci(fib)) n--;
                if (!n) break;
            }
            printf("%llu\n", fib);
        } else {
            printf("0\n");
        }
    }

    return 0;

}
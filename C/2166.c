#include <stdio.h>

double raiz_de_dois(int num, double valor) {
    if (num != 0) {
        return raiz_de_dois(num - 1, (1.0 / (valor + 2)));
    }
    return valor; 
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%.10lf\n", raiz_de_dois(n, 0.0) + 1);

    return 0;

}
#include <stdio.h>

int main() {

    int diasTotais;
    scanf("%d", &diasTotais);

    int anos = diasTotais / 365;
    int meses = (diasTotais - (anos * 365)) / 30;
    int dias = diasTotais - (anos * 365) - (meses * 30);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;

}
//
// Created by yurinogueira on 09/09/2021.
//

#include <stdio.h>
#include <stdlib.h>

int mdc(int num1, int num2) {
    int resto;

    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (resto != 0);

    return num1;
}

void print(int numerador, int denominador, int divisor) {
    printf("%d/%d", numerador, denominador);
    printf(" = ");
    printf("%d/%d\n", (numerador / divisor), (denominador / divisor));
}

void soma(int num1, int deno1, int num2, int deno2) {
    int numerador = num1 * deno2 + num2 * deno1;
    int denominador = deno1 * deno2;
    int divisor = mdc(abs(numerador), abs(denominador));
    print(numerador, denominador, divisor);
}

void subtracao(int num1, int deno1, int num2, int deno2) {
    int numerador = (num1 * deno2) - (num2 * deno1);
    int denominador = deno1 * deno2;
    int divisor = mdc(abs(numerador), abs(denominador));
    print(numerador, denominador, divisor);
}

void multiplicacao(int num1, int deno1, int num2, int deno2) {
    int numerador = num1 * num2;
    int denominador = deno1 * deno2;
    int divisor = mdc(abs(numerador), abs(denominador));
    print(numerador, denominador, divisor);
}

void divisao(int num1, int deno1, int num2, int deno2) {
    int numerador = num1 * deno2;
    int denominador = num2 * deno1;
    int divisor = mdc(abs(numerador), abs(denominador));
    print(numerador, denominador, divisor);
}

int main() {

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int numerador1, numerador2;
        int denominador1, denominador2;
        char lixo[2];
        char operacao[2];

        scanf("%d", &numerador1);
        scanf("%s", lixo);
        scanf("%d", &denominador1);
        scanf("%s", operacao);
        scanf("%d", &numerador2);
        scanf("%s", lixo);
        scanf("%d", &denominador2);

        switch (operacao[0]) {
            case '+': {
                soma(numerador1, denominador1, numerador2, denominador2);
                break;
            }
            case '-': {
                subtracao(numerador1, denominador1, numerador2, denominador2);
                break;
            }
            case '*': {
                multiplicacao(numerador1, denominador1, numerador2, denominador2);
                break;
            }
            default: {
                divisao(numerador1, denominador1, numerador2, denominador2);
                break;
            }
        }
    }

    return 0;

}
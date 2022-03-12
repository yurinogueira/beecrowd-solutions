//
// Created by yurinogueira on 26/07/2021.
//

#include <stdio.h>

size_t palindrome(char *inicio, char *fim) {
    while (inicio < fim) {
        if (*inicio++ != *fim--) {
            return 0;
        }
    }
    return 1;
}

size_t sequencia(char *palavra, const size_t len, const size_t d) {

    if (d == 1) {
        return len;
    }

    // d = deslocamento
    // p = tamanho do palindrome
    // k = substrings

    size_t p, c, temp_value, maior = 0;

    for (p = 1; p <= d; p++) {
        temp_value = 0;
        c = 0;
        while (c + p <= len) {
            if (palindrome(&palavra[c], &palavra[c + p - 1])) {
                temp_value += p;
            }
            c += d;
        }
        if (temp_value > maior) {
            maior = temp_value;
        }
    }

    return maior;
}


int main() {

    size_t len, pulo;
    char palavra[100001];

    while (scanf("%lu %lu", &len, &pulo) != EOF && len != 0 && pulo != 0) {
        if (scanf("%s", palavra) == EOF) {
            break;
        }
        else {
            printf("%lu\n", sequencia(palavra, len, pulo));
        }
    }

    return 0;

}
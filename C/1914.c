#include <stdio.h>
#include <string.h>

typedef struct player {
    char escolheu[6];
    char nome[101];
    unsigned long long int valor;
} Jogador;

int main() {

    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        Jogador jogUm;
        Jogador jogDois;
        for (int j = 0; j < 4; j++) {
            if (j == 0) scanf("%s", jogUm.nome);
            else if (j == 1) scanf("%s", jogUm.escolheu);
            else if (j == 2) scanf("%s", jogDois.nome);
            else scanf("%s", jogDois.escolheu);
        }
        scanf("%llu %llu", &jogUm.valor, &jogDois.valor);
        if (strcmp(jogUm.escolheu, "PAR") == 0) {
            if ((jogUm.valor + jogDois.valor) % 2 == 0) printf("%s\n", jogUm.nome);
            else printf("%s\n", jogDois.nome);
        } else {
            if ((jogUm.valor + jogDois.valor) % 2 == 0) printf("%s\n", jogDois.nome);
            else printf("%s\n", jogUm.nome);
        }
    }

    return 0;

}
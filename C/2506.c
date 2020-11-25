#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int minutos;
    int crit;
    struct lista* prox;
} ListInt;

ListInt* createList() {
    return NULL;
}

ListInt* listAdd(ListInt* lista, int hora, int min, int crit) {
    ListInt* ptr = malloc(sizeof(ListInt));
    
    ptr->minutos = (hora * 60) + min;
    ptr->crit = crit;
    ptr->prox = NULL;

    if (lista == NULL) {
        return ptr;
    }

    ListInt* ultimo;
    ultimo = lista;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = ptr;
    return lista;
}

void printMortos(ListInt* l) {
    int tempo_total = 420, mortos = 0;
    ListInt* p;
    for (p = l; p != NULL; p = p->prox) {
        while (tempo_total < p->minutos) {
            tempo_total += 30;
        }

        if (tempo_total - p->minutos > p->crit) {
            mortos++;
        }
        tempo_total += 30;
    }
    printf("%d\n", mortos);
}

void freeList(ListInt* lista) {
    ListInt* tmp = 0;
    while(lista) {
        tmp = lista->prox;
        free(lista);
        lista = tmp;
    }
}

int main() {

    int i, ans;
    int hora, minuto, critico, n;

    while (scanf("%d", &n) != EOF) {   
        ListInt* lista = createList();
        for (i = 0; i < n; ++i) {
            scanf("%d %d %d", &hora, &minuto, &critico);
            lista = listAdd(lista, hora, minuto, critico);
        }
        printMortos(lista);
        freeList(lista);
    }

    return 0;

}
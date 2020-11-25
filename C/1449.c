#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    char* x;
    char* y;
    struct lista* prox;
} ListString;

typedef struct palavra {
    char* x;
    struct palavra* prox;
} ListPalavra;

typedef struct listaE {
    ListPalavra* palavra;
    struct listaE* prox; 
} ListSequencia;


ListString* createList() {
    return NULL;
}

ListPalavra* createPalavras() {
    return NULL;
}

ListSequencia* createSequence() {
    return NULL;
}


ListString* listAdd(ListString* lista, char* x, char* y) {
    ListString* ptr = malloc(sizeof(ListString));
    
    ptr->x = malloc(strlen(x) + 1);
    strcpy(ptr->x, x);

    ptr->y = malloc(strlen(y) + 1);
    strcpy(ptr->y, y);

    ptr->prox = lista;

    return ptr;
}

ListPalavra* listAddPalavra(ListPalavra* lista, char* x) {
    ListPalavra* ptr = malloc(sizeof(ListPalavra));
    
    ptr->x = malloc(strlen(x) + 1);
    strcpy(ptr->x, x);
    ptr->prox = NULL;

    if (lista == NULL) {
        return ptr;
    }

    ListPalavra* ultimo;
    ultimo = lista;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = ptr;
    return lista;
}

ListSequencia* listAddSequencia(ListSequencia* lista, ListPalavra* brabissimo) {
    ListSequencia* ptr = malloc(sizeof(ListSequencia));

    ptr->palavra = brabissimo;
    ptr->prox = NULL;

    if (lista == NULL) {
        return ptr;
    }

    ListSequencia* ultimo;
    ultimo = lista;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = ptr;

    return lista;
}

ListString* busca(ListString* l, char* x) { 
    ListString* p;
    for (p = l; p != NULL; p = p->prox) {
        if (strcmp(p->y, x) == 0) {
            return p;
        }
    }
    return NULL;
}

void freeList(ListString* lista) {
    ListString* tmp = 0;
    while(lista) {
        tmp = lista->prox;
        free(lista->x);
        free(lista->y);
        free(lista);
        lista = tmp;
    }
}

void freeListPalavra(ListPalavra* lista) {
    ListPalavra* tmp = 0;
    while(lista) {
        tmp = lista->prox;
        free(lista->x);
        free(lista);
        lista = tmp;
    }
}

void freeListSequencia(ListSequencia* lista) {
    ListSequencia* tmp = 0;
    while (lista) {
        tmp = lista->prox;
        freeListPalavra(lista->palavra);
        free(lista);
        lista = tmp;
    }
}


int main() {

    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++) {
        int m, n;

        ListSequencia* sequencia = createSequence();
        ListString* dicionario = createList();

        scanf("%d %d", &m, &n);
        getchar();
        for (int j = 0; j < m; j++) {
            char japa[81];
            char trad[81];
            scanf("%s", japa);
            getchar();
            scanf("%81[^\n]", trad);
            getchar();
            dicionario = listAdd(dicionario, trad, japa);
        }

        for (int j = 0; j < n; j++) {
            ListPalavra* palavras = createPalavras();
            char palavra[81];
            int k = 0;
            while(1) {
                char c = getchar();
                if (c == '\n') {
                    palavra[k] = '\0';
                    palavras = listAddPalavra(palavras, palavra);
                    break;
                }

                if (c == ' ') {
                    palavra[k] = '\0';
                    palavras = listAddPalavra(palavras, palavra);
                    k = 0;
                    continue;
                }

                palavra[k] = c;
                k++;
            }
            sequencia = listAddSequencia(sequencia, palavras);
        }

        ListSequencia* percorrendo = sequencia;
        while (percorrendo) {
            int k = 0;
            char result[161];
            ListPalavra* ptr = percorrendo->palavra;
            while (ptr) {
                ListString* buscada = busca(dicionario, ptr->x);
                if (buscada == NULL) {
                    for (int j = 0; j < strlen(ptr->x); j++) {
                        result[k] = ptr->x[j];
                        k++;
                    }
                    result[k] = ' ';
                    k++;
                } else {
                    for (int j = 0; j < strlen(buscada->x); j++) {
                        result[k] = buscada->x[j];
                        k++;
                    }
                    result[k] = ' ';
                    k++;
                }
                ptr = ptr->prox;
            }
            result[k - 1] = '\0';
            printf("%s\n", result);
            percorrendo = percorrendo->prox;
        }
        printf("\n");

        freeList(dicionario);
        freeListSequencia(sequencia);

    }

}
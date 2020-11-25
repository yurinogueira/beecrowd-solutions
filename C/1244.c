#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    char* string;
    int len;
    struct lista* prox;
} ListString;

ListString* createList() {
    return NULL;
}

ListString* listAddPalavra(ListString* l, char* string) {
    ListString* ant = NULL;
    ListString* p = l;

    int len = strlen(string);

    while (p != NULL && p->len >= len) {         
        ant = p; 
        p = p->prox; 
    }

    ListString* novo = (ListString*) malloc(sizeof(ListString));

    novo->len = len;
    novo->string = malloc(strlen(string) + 1);
    strcpy(novo->string, string);

    if (ant == NULL){
        novo->prox = l;    
        l = novo;
    } else { 
        novo->prox = ant->prox;
        ant->prox = novo;
    }

    return l;
}

void printList(ListString* l) {
    ListString* p;
    for (p = l; p != NULL; p = p->prox) {
        printf("%s", p->string);
        if (p->prox != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

void freeListPalavra(ListString* lista) {
    ListString* tmp = 0;
    while(lista) {
        tmp = lista->prox;
        free(lista->string);
        free(lista);
        lista = tmp;
    }
}


int main() {

    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {

        ListString* palavras = createList();
        char palavra[51];
        int k = 0;
        
        while(1) {
            char c;
            scanf("%c", &c);
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

        printList(palavras);
        freeListPalavra(palavras);
    }

    return 0;

}
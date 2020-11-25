#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    char* string;
    struct lista* prox;
} ListString;

ListString* createList() {
    return NULL;
}

ListString* listAddPalavra(ListString* l, char* string) {
    ListString* ant = NULL;
    ListString* p;

    for (p = l; p != NULL; p = p->prox) {
        if (strcmp(p->string, string) == 0) {
            return l;
        }
    }
    
    p = l;
    
    while (p != NULL && strcmp(p->string, string) < 0) {
        ant = p;
        p = p->prox; 
    }

    ListString* novo = (ListString*) malloc(sizeof(ListString));

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
        int found = 0;
        printf("%s", p->string);
        if (p->prox != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

void freeList(ListString* lista) {
    ListString* tmp = 0;
    while(lista) {
        tmp = lista->prox;
        free(lista->string);
        free(lista);
        lista = tmp;
    }
}

int main() {

    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++) {
        ListString* palavras = createList();
        char palavra[21];
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
        freeList(palavras);
    }

    return 0;

}
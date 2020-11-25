#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista {
    char* x;
    char* y;
    struct lista* prox;
} ListString;

ListString* createList() {
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

int main() {

    int t, i;

    while (scanf("%d", &t) != EOF && t != 0) {

        ListString *lista = createList();

        int no_func = 0;
        int repete = 0;


        for (i = 0; i < t; i++) {

            char* xx[31];
            char* atoa[3];
            char* yy[31];

            scanf("%s %s %s", xx, atoa, yy);

            if (no_func == 0) {
                ListString* ptr = lista;
                while (ptr) {
                    if (strcmp(ptr->x, xx) == 0) {
                        no_func = 1;
                        break;
                    }
                    if (strcmp(ptr->y, yy) == 0) {
                        repete = 1;
                    }
                    ptr = ptr->prox;
                }
            }
            
            lista = listAdd(lista, xx, yy);
        }
        
        freeList(lista);

        if (no_func) {
            printf("Not a function.\n");
        } else if (repete) {
            printf("Not invertible.\n");
        } else {
            printf("Invertible.\n");
        }

    }

    return 0;

}
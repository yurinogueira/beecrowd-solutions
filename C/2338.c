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

ListString* listAddPalavra(ListString* lista, char* x) {
    ListString* ptr = malloc(sizeof(ListString));
    
    ptr->string = malloc(strlen(x) + 1);
    strcpy(ptr->string, x);
    ptr->prox = NULL;

    if (lista == NULL) {
        return ptr;
    }

    ListString* ultimo;
    ultimo = lista;

    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = ptr;
    return lista;
}

char convert(char* string) {
    if (strcmp(string, "=.===") == 0)           return 'a';
    if (strcmp(string, "===.=.=.=") == 0)       return 'b';
    if (strcmp(string, "===.=.===.=") == 0)     return 'c';
    if (strcmp(string, "===.=.=") == 0)         return 'd';
    if (strcmp(string, "=") == 0)               return 'e';
    if (strcmp(string, "=.=.===.=") == 0)       return 'f';
    if (strcmp(string, "===.===.=") == 0)       return 'g';
    if (strcmp(string, "=.=.=.=") == 0)         return 'h';
    if (strcmp(string, "=.=") == 0)             return 'i';
    if (strcmp(string, "=.===.===.===") == 0)   return 'j';
    if (strcmp(string, "===.=.===") == 0)       return 'k';
    if (strcmp(string, "=.===.=.=") == 0)       return 'l';
    if (strcmp(string, "===.===") == 0)         return 'm';
    if (strcmp(string, "===.=") == 0)           return 'n';
    if (strcmp(string, "===.===.===") == 0)     return 'o';
    if (strcmp(string, "=.===.===.=") == 0)     return 'p';
    if (strcmp(string, "===.===.=.===") == 0)   return 'q';
    if (strcmp(string, "=.===.=") == 0)         return 'r';
    if (strcmp(string, "=.=.=") == 0)           return 's';
    if (strcmp(string, "===") == 0)             return 't';
    if (strcmp(string, "=.=.===") == 0)         return 'u';
    if (strcmp(string, "=.=.=.===") == 0)       return 'v';
    if (strcmp(string, "=.===.===") == 0)       return 'w';
    if (strcmp(string, "===.=.=.===") == 0)     return 'x';
    if (strcmp(string, "===.=.===.===") == 0)   return 'y';
    if (strcmp(string, "===.===.=.=") == 0)     return 'z';
    return ' ';
}

void printList(ListString* l) {
    ListString* p;
    for (p = l; p != NULL; p = p->prox) {
        printf("%c", convert(p->string));
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
        char palavra[20];
        int k = 0;
        
        while(1) {
            char c;
            scanf("%c", &c);
            if (c == '\n') {
                palavra[k] = '\0';
                palavras = listAddPalavra(palavras, palavra);
                break;
            }
            if (k >= 3 && palavra[k - 2] == '.' && palavra[k - 1] == '.' && c == '.') {
                palavra[k - 2] = '\0';
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

}
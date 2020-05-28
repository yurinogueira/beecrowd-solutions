#include <stdio.h>

int main() {

    int i, j;
    char nome[26];
    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        scanf("%s", nome);
        printf("Y\n");
    }

    return 0;

}
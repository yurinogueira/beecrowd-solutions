//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int i, j, a;
    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        scanf("%d", &a);
        if (a > 8000) {
            printf("Mais de 8000!\n");
        } else {
            printf("Inseto!\n");
        }
    }

    return 0;

}
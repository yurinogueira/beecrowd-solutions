//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int lista[10001], i, j, bool = 1, save;
    scanf("%d", &j);

    for (i = 0; i < j; i++) {
        scanf("%d", &lista[i]);
        if (i == 0) {
            save = lista[i];
        } else {
            if (save < lista[i]) {
                bool = 0;
            }
        }
    }

    if (bool) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;

}
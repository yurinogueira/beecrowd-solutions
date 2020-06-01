//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int i, j, s, m, menor;
    scanf("%d %d", &i, &s);
    menor = s;
    for (j = 0; j < i; j++) {
        scanf("%d", &m);
        s += m;
        if (s < menor) {
            menor = s;
        }
    }

    printf("%d\n", menor);

    return 0;

}
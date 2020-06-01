//
// Created by yuri on 01/06/2020.
//

#include <stdio.h>

int main() {

    int i, j, r = 0, s;
    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        scanf("%d", &s);
        r += (s - 1);
    }

    printf("%d\n", r);

    return 0;

}
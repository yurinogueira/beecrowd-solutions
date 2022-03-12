//
// Created by yurinogueira on 19/06/2021.
//
#include "stdio.h"

int main() {

    int t, i, l;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%d", &l);
        printf("%d\n", (((l * (l + 1)) / 2) + 1));
    }

    return 0;

}
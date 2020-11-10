#include <stdio.h>

int main() {

    int bola, x, y, z;
    scanf("%d %d %d %d", &bola, &x, &y, &z);
    if (bola <= x && bola <= y && bola <= z) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;

}
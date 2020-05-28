#include <stdio.h>
#include <string.h>

int main() {

    char string[10000];
    int i, j;
    double len;
    scanf("%d", &i);

    for (j = 0; j < i; j++) {
        scanf("%s", string);
        len = strlen(string);
        printf("%.2f\n", (len / 100));
    }

    return 0;

}
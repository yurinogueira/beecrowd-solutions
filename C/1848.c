#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int i;
    int value = 0;
    int count = 0;
    char palavra[8];

    while (count != 3) {
        scanf("%[^\n]", palavra);
        getchar();
        if (strcmp(palavra, "caw caw") == 0) {
            count++;
            printf("%d\n", value);
            value = 0;
        } else {
            for (i = 0; i < 3; i++) {
                if (palavra[i] == '*') {
                    value += 4 / (pow(2, i));
                }
            }
        }
    }

    return 0;

}
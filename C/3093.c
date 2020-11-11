#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    int tem[4];
    char baralho[1001];
    int boolean;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) tem[j] = 0;
        scanf("%s", baralho);
        boolean = 1;
        for (int j = 0; j < strlen(baralho); j++) {
            if (baralho[j] == 'Q') {
                tem[0] = 1;
            } else if (baralho[j] == 'J') {
                tem[1] = 1;
            } else if (baralho[j] == 'K') {
                tem[2] = 1;
            } else if (baralho[j] == 'A') {
                tem[3] = 1;
            }
        }
        for (int j = 0; j < 4; j++) {
            if (tem[j] == 0) {
                boolean = 0;
                break;
            }
        }
        if (boolean) {
            printf("Aaah muleke\n");
        } else {
            printf("Ooo raca viu\n");
        }
    }

    return 0;

}
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char rajesh[10], sheldon[10];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s", rajesh, sheldon);
        if (strcmp(rajesh, sheldon) == 0)                                           printf("Caso #%d: De novo!\n", i + 1);
        else if (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "tesoura") == 0)     printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "papel") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "pedra") == 0) printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "Spock") == 00 && strcmp(sheldon, "lagarto") == 0)    printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "Spock") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "tesoura") == 0)     printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "lagarto") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "Spock") == 0 && strcmp(sheldon, "papel") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "Spock") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "pedra") == 0)   printf("Caso #%d: Raj trapaceou!\n", i + 1);
        else printf("Caso #%d: Bazinga!\n", i + 1);
    }

}
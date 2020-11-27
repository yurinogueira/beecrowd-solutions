#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char rajesh[10], sheldon[10];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s", rajesh, sheldon);
        if (strcmp(rajesh, sheldon) == 0)                                           printf("empate\n");
        else if (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "pedra") == 0)     printf("rajesh\n");
        else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "spock") == 0)   printf("rajesh\n");
        else if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "lagarto") == 0) printf("rajesh\n");
        else if (strcmp(rajesh, "papel") == 00 && strcmp(sheldon, "spock") == 0)    printf("rajesh\n");
        else if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "papel") == 0)   printf("rajesh\n");
        else if (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "pedra") == 0)     printf("rajesh\n");
        else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "papel") == 0)   printf("rajesh\n");
        else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "lagarto") == 0)   printf("rajesh\n");
        else if (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "tesoura") == 0)   printf("rajesh\n");
        else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "tesoura") == 0)   printf("rajesh\n");
        else printf("sheldon\n");
    }

}
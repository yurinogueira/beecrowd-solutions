#include <stdio.h>

int main()
{
    int i, j = 0, len;
    char palavra[60], vogais[60];
    scanf("%s", palavra);

    for(i = 0; i < strlen(palavra); i++) {
        if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u') {
            vogais[j] = palavra[i];
            j++;
        }
    }
    vogais[j] = '\0';

    len = strlen(vogais);
    for(i = 0, j = len - 1; i < len; i++, j--) {
        if(vogais[i] != vogais[j])
        {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");

    return 0;

}
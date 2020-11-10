#include <stdio.h>

int main() {

    int i, len;
    char str[31];

    while (scanf("%s", str) != EOF) {
        len = strlen(str);
        for (i = len - 3; i >= 0; i--) {
            if (str[len - 2] == str[i] && str[len - 1] == str[i + 1]) {
                str[i + 2] = '\0';
                break;
            }
        }
        printf("%s\n", str);
    }

    return 0;

}
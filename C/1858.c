#include <stdio.h>

int main(){

	int n, resp, i = 1, t, posicMenor = 21;
	scanf("%d", &n);
	
    for (i; i <= n; i++) {
		scanf("%d", &t);
		if (t < posicMenor) {
            posicMenor = t; 
            resp = i;
        }
    }

	printf("%d\n", resp);
	
	return 0;
}
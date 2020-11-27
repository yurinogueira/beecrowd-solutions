#include <stdio.h>

int main() {
	int n, inicial, final;
	
	while (scanf("%d", &n) != EOF) {
		int matriz[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++){
				if (i == j) {
                    matriz[i][j] = 2;
                } else if (i + j == n - 1) {
                    matriz[i][j] = 3;
                } else {
                    matriz[i][j] = 0;
                }
			}
        }

		inicial = n / 3;
		final = n - inicial;
		for (int i = inicial; i < final; i++) {
			for (int j = inicial; j < final; j++){
				 matriz[i][j] = 1;
			}
        }
		
		matriz[n / 2][n / 2] = 4;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d", matriz[i][j]);			 
            }
			printf("\n");					
		}
		printf("\n");			
	}
	return 0;
}
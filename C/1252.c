#include <stdio.h>
#include <math.h>

int vetor[10000];
int modulo[10000];

void ordenar(int inicio, int fim) {
	int valorMin, valorIndex;
    int vetorMin;
	int aux, auxVetor, i;

	if (inicio >= fim) {
		return;
    }

	valorMin = modulo[inicio];
    vetorMin = vetor[inicio];
	valorIndex = inicio;
    
	for (i = inicio + 1; i < fim; i++) {
		int valor = modulo[i];
        int valorVetor = vetor[i];

		if (valor < valorMin) {
			valorMin = valor;
            vetorMin = valorVetor;
			valorIndex = i;
		}
        else if (valor == valorMin) {
            if (abs(valorVetor) % 2 == 1 && abs(vetorMin) % 2 == 0) {
                vetorMin = valorVetor;
                valorMin = valor;
                valorIndex = i;
            }
            else if (abs(valorVetor) % 2 == 1 && abs(vetorMin) % 2 == 1) {
                if (valorVetor > vetorMin) {
                    vetorMin = valorVetor;
                    valorMin = valor;
                    valorIndex = i;
                }
            }
            else if (abs(valorVetor) % 2 == 0 && abs(vetorMin) % 2 == 0) {
                if (valorVetor < vetorMin) {
                    vetorMin = valorVetor;
                    valorMin = valor;
                    valorIndex = i;
                }
            }
        }
	}

	if (valorIndex != inicio) {
		aux = modulo[inicio];
        auxVetor = vetor[inicio];
		modulo[inicio] = valorMin;
        vetor[inicio] = vetorMin;
		modulo[valorIndex] = aux;
        vetor[valorIndex] = auxVetor;
	}

	ordenar(inicio + 1, fim);
}

int main() {

    int n, m, i;
    scanf("%d %d", &n, &m);
    printf("%d %d\n", n, m);
    while (n != 0 && m != 0) {
        for (i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
            modulo[i] = (vetor[i] % m);
        }
        ordenar(0, n);
        for (i = 0; i < n; i++) {
            printf("%d\n", vetor[i]);
        }

        scanf("%d %d", &n, &m);
        printf("%d %d\n", n, m);
    }

    return 0;

}
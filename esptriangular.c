#include <stdio.h>

int main() {
	int valorBase = 1, valorDireito = 1, valorEsquerdo = 2, contador = 0, x = 0, y = 0, aux = 0;
	int n = 0;
	int base = 1, esquerdo = 0, direito = 0;
	printf("Espiral triangular: \n");
	printf("Por favor insira um número inteiro e retornarei a coordenada correspondente a esse ponto\n");

	scanf("%d", &n);
	while (contador < n) {
		if (base && !esquerdo && !direito) {
			if (aux == valorBase) {
				valorBase += 4;
				aux = 1;
				base = 0;
				esquerdo = 1;
				x--;
				y++;
			}
			else {
				x++;
				aux++;
			}
		}
		else if (!base && esquerdo && !direito) {
			if (aux == valorDireito) {
				valorDireito += 2;
				aux = 1;
				direito = 1;
				esquerdo = 0;
				y--;
				x--;
			}
			else {
				x--;
				y++;
				aux++;
			}
		}
		else if (!base && !esquerdo && direito) {
			if (aux == valorEsquerdo) {
				valorEsquerdo += 2;
				aux = 1;
				base = 1;
				direito = 0;
				x++;
			}
			else {
				y--;
				x--;
				aux++;
			}
		}
		contador++;
	}

	printf("( %d, %d )\n", x, y);
	return 0;
}
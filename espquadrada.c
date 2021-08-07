#include <stdio.h>

int main() {
	int n = 0, auxiliarOrientacao = 1, comprimentoReta = 1, x = 0, y = 0, unidade = 1, contador = 0;

	int isEixoX = 0; //Verifica se as operações devem ser efetuadas no eixo X ou no Y- false = eixo y e true = eixo x

	printf("Espiral quadrada: \n");
	printf("Por favor insira um número inteiro e retornarei a coordenada correspondente a esse ponto\n");
	scanf("%d", &n);
	while (contador < n) {

		if (!isEixoX) {
			y = y + unidade;
		}
		else {
			x = x - unidade;
		}

		if (auxiliarOrientacao == comprimentoReta) {
			auxiliarOrientacao = 0;
			isEixoX = !isEixoX;

			if (!isEixoX) {
				comprimentoReta++;

				if (comprimentoReta % 2 == 0) {
					unidade = -1;
				}
				else {
					unidade = 1;
				}
			}
		}
		auxiliarOrientacao++;
		contador++;
	}
	printf("( %d, %d )", x, y);
	return 0;
}
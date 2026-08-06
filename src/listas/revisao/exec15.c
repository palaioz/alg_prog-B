/*
15 - Encontre as raízes de uma equação de 2º grau ax2 + bx + c. 
O algoritmo deverá ler os coeficientes a, b e c 
e calcular as raízes utilizando a fórmula de Báskara:
*/

#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	float delta, x_1, x_2;

	printf("=== CALCULO EQUACAO QUADRATICA ===\n");
	printf("Digite os coeficientes da equacao (a b c): ");
	scanf("%f %f %f", &a, &b, &c);

	if (a == 0){
		printf("ERRO: O coeficiente 'a' deve ser diferente de zero para uma equacao de segundo grau.");
		return -1;
	}

	delta = ((b * b) - 4 * a * c);

	if (delta < 0){
		printf("\nResultado: A equacao nao possui raizes reais (Delta negativo %.2f).", delta);
	} else {
		x_1 = (-b + sqrt(delta) / (2 * a));
		x_2 = (-b - sqrt(delta) / (2 * a));

		printf("\nResultado:");
		printf("\nDelta = %.2f", delta);
		printf("\nX_1 = %.2f", x_1);
		printf("\nX_2 = %.2f", x_2);
	}



	return 0;
}
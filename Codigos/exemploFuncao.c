#include <stdio.h>

void calcula(){
	float x, y,  resultado;
	char op;
	printf("Entre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nEntre com o operador(+,-,*,/): ");
	getchar();
	scanf("%c", &op);
	switch(op){
		case '+':
			resultado = x + y;
			printf("\nValor da Soma: %f", resultado);
			break;
		case '-':
			resultado = x-y;
			printf("\nValor da Subtracao: %f", resultado);
			break;
		case '*':
			resultado = x*y;
			printf("\nValor da Multiplicacao: %f", resultado);
			break;
		case '/':
			resultado = x/y;
			printf("\nValor da Divisao: %f", resultado);
			break;
		default:
			printf("\nOpcao invalida");
	}
}
int main(){
	calcula();
}

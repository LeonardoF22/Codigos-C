#include <stdio.h>

float calcula(float x, float y, char op){
	float resultado;
	switch(op){
		case '+':
			resultado = x + y;
			break;
		case '-':
			resultado = x-y;
			break;
		case '*':
			resultado = x*y;
			break;
		case '/':
			resultado = x/y;
			break;
		default:
			printf("\nOpcao invalida");
	}
	return resultado;
}
int main(){
	float x,  y, resultado;
	char op;
	printf("Entre com o valor de x: ");
	scanf("%f",&x);
	printf("\nEntre com o valor de y: ");
	scanf("%f",&y);
	printf("\nEntre com o operador(+,-,*,/): ");
	getchar();
	scanf("%c", &op);
	resultado = calcula(x, y, op);
	printf("Resultado da operacao: %f", resultado);
}

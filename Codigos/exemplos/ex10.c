#include <stdio.h>
int main(){
	float comprimento, altura, largura, resultado;

	printf("Calculo de volume");
	printf("\nDigite o comprimento: ");
	scanf("%f", &comprimento);

	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite a largura: ");
	scanf("%f", &largura);
	
	resultado = comprimento * altura * largura;
	printf("\nVolume = %f", resultado);
}

#include <stdio.h>
int main(){
	float area, largura, comprimento;
	
	printf("Entre com a largura: ");
	scanf("%f", &largura);
	printf("\nEntre com o comprimento: ");
	scanf("%f", &comprimento);
	area = comprimento * largura;
	printf("Area: %f", area);
}

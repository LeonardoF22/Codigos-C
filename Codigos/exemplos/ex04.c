#include <stdio.h>
int main(){
	float grausc, grausf;
	printf("Conversor de temperatura");
	printf("\nDigite a temperatura em ºC: ");
	scanf("%f", &grausc);
	grausf = grausc * 1.8 + 32;
	printf("\nResultado: %f", grausf);
	
}

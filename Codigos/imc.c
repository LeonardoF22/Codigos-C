#include <stdio.h>

int main(){
	float peso, altura, imc;
	int x = 1, quantidade;
	
	printf("Calculo de IMC");
	printf("\nQuantos IMCs deseja calcular: ");
	scanf("%i", &quantidade);
	

	do{
		printf("\nPaciente: %i", x);
		printf("\nEntre com o peso: ");
		scanf("%f", &peso);
		printf("\nEntre com a altura: ");
		scanf("%f", &altura);
		imc = peso / (altura*altura);
		printf("\nIMC: %f", imc);
		if(imc <= 18.5){
			printf("\nAbaixo do peso ideal");
		} 
		else if(imc > 18.5 && imc <= 24.99){
			printf("\nPeso ideal");
		}
		else if(imc > 24.99 && imc <= 29.99){
			printf("\nSobrepeso");
		} else {
			printf("\nObesidade");
		}
		x++;
	} while (x <= quantidade);
	
	printf("Programa encerrado");
}

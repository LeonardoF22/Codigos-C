#include <stdio.h>
int main(){
	float salario, salarioFinal;
	printf("Digite seu salario para receber um aumento de 25 porcento. R$");
	scanf("%f", &salario);
	salarioFinal = salario * 1.25;
	printf("\nSeu salario que era de R$%.2f agora sera R$%.2f", salario, salarioFinal);
}

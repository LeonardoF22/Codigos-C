#include <stdio.h>
int main(){
	int horasTrabalhadas, horasExtras;
	float salarioHora, salarioTotal;
	
	printf("Digite a quantidade de horas trabalhadas no mes: ");
	scanf("%i", &horasTrabalhadas);
	printf("\nDigite o valor pago por hora: R$");
	scanf("%f", &salarioHora);
	
	if(horasTrabalhadas <= 160){
		salarioTotal = salarioHora * horasTrabalhadas;
	} else {
		horasExtras = horasTrabalhadas - 160;
		salarioTotal = salarioHora * 160 +  ((horasExtras * salarioHora) * 1.5);
	}
	
	printf("\nO salario total sera de: R$%.2f", salarioTotal);
}

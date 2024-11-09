#include <stdio.h>
int main(){
	int numeroConta;
	float saldo, debito, credito, saldoa;
	printf("Digite o numero da conta: ");
	scanf("%i", &numeroConta);
	
	printf("\nDigite o saldo: ");
	scanf("%f", &saldo);
	
	printf("\nDigite o que sera debitado: ");
	scanf("%f", &debito);
	
	printf("\nDigite o que sera creditado: "); 
	scanf("%f", &credito);
	
	printf("O saldo antigo era de: R$%f", saldo);
	saldoa = saldo - credito + saldoa;
	printf("O novo saldo e de: R$%f", saldoa);
	
}

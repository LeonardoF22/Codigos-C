#include <stdio.h>
int main(){
	float litros, precog, precoa, valorf;
	char tipo;
	precoa = 3.39;
	precog = 5.39;
	printf("Digite qual combustivel deseja: ");
	scanf("%c", &tipo);
	printf("\nDigite a quantidade: ");
	scanf("%f", &litros);
	if(tipo == "A"){
		if(litros <= 20){
			valorf = litros * precoa * 0.96;
		} else {
			valorf = litros * precoa * 0.94;
		}
	} else {
		if (litros <=  20){
			valorf = litros * precog * 0.96;
		} else {
			valorf = litros * precog * 0.94;
		}
	}
	printf("O valor a ser pago sera R$%f", valorf);
}

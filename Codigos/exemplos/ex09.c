#include <stdio.h>
int main(){
	int anonasc, anoa, idade, idadem, idaded, idades;
	printf("Calculo de idade");
	printf("\nDigite seu ano de nascimento: ");
	scanf("%i", &anonasc);
	anoa = 2024;
	idade = anoa - anonasc;
	idadem = idade * 12;
	idaded = idade * 365;
	idades = idade * 12 * 4;
	
	printf("\nIdade = %i", idade);
	printf("\nIdade em dias = %i", idaded);
	printf("\nIdade em meses = %i", idadem);
	printf("\nIdade em semanas = %i", idades);
	
}

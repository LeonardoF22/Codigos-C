#include <stdio.h>
int main(){
	int a, b, c, d;
	int maior, meio, menor;
	
	printf("Digite o valor a: ");
	scanf("%i", &a);
	printf("\nDigite o valor b: ");
	scanf("%i", &b);
	printf("\nDigite o valor c: ");
	scanf("%i", &c);
	printf("\nDigite o valor d: ");
	scanf("%i", &d);
	
	if( b >= c && b >= d){ // B é o maior
		if (d >= c) { 
			maior = b;
			meio = d;
			menor = c;
		} else {
			maior = b;
			meio = c;
			menor = d;
		}
	} 
					
	else if( c >= b && c >= d){ // C é o maior
		if (d >= b){
			maior = c;
			meio = d;
			menor = b ;
		} else {
			maior = c;
			meio = b;
			menor = d;
		}	
	}
	
	else if ( d >= c && d >= b){ // D é o maior
		if ( b >= c ){
			maior = d;
			meio = b;
			menor = c;
		} else {
			maior = d;
			meio = c;
			menor = b;
		}
	}
	
	switch(a){
		case 1:
			printf("\n%i", menor);
			printf("\n%i", meio);
			printf("\n%i", maior);
			break;
		case 2:
			printf("%i", maior);
			printf("\n%i", meio);
			printf("\n%i", menor);
			break;
		case 3:
			printf("\n%i", menor);
			printf("\n%i", maior);
			printf("\n%i", meio);
			break;
		default:
			printf("Opcao invalida!");
	}
}

#include <stdio.h>
int main(){
	int valores[10], i, menor, maior, soma;
	float media;
	
	for(i=0; i<10;i++){
		printf("Entre com o valor para a posicao %i: ", i);
		scanf("%i", &valores[i]);
		soma += valores[i];
		
		if(i == 0){
			maior = valores[i];
			menor = valores[i];
		} else {
			if(valores[i]<menor){
			menor = valores[i];
			}
			if(valores[i]>maior){
				maior = valores[i];
			}
		}
	}
	media = soma/10;
	
	printf("\nMedia: %f", media);
	printf("\nMaior valor: %i", maior);
	printf("\nMenor valor: %i", menor);
}

#include <stdio.h>
int main(){
	int vetorA[5], vetorB[5], vetorC[5], i;
	for(i=0; i < 5; i++){
		printf("Entre com os valores para o vetorA: ");
		scanf("%i", &vetorA[i]);
	}
	for(i=0; i<5; i++){
		printf("\nEntre com os valores para o vetorB: ");
		scanf("%i", &vetorB[i]);
	}
	for(i=0; i<5; i++){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	for(i=0; i<5; i++){
		printf("\nVetorC[%i] -> %i", i, vetorC[i]);
	}
}

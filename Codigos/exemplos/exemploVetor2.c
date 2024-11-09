#include <stdio.h>
int main(){
	int vetor[5] = {10, 50, 22, 1000, 8};
	int i;
	for(i=0; i<5; i++){
		printf("\nValor na posicao %i: %i", i, vetor[i]);
	}
}

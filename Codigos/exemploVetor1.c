#include <stdio.h>

int main(){
	int dados[5];
	int i;
	for(i=0; i<5; i++){
		printf("Entre com valor: ");
		scanf("%i", &dados[i]);
	}
	for(i=0; i<5; i++){
		printf("\nPosicao %i -> %i", i, dados[i]);
	}
}

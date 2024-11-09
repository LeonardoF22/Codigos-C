#include <stdio.h>
int main(){
	int termo1 = 1, termo2 = 1, proximo, i;
	printf("Sequencia de Fibonacci");
	printf("\n%i, ", termo1);
	printf("%i, ", termo2);
	for(i = 0; i < 20; i++){
		proximo = termo1 + termo2;
		printf("%i, ", proximo);
		termo1 = termo2;
		termo2 = proximo;
	}
}

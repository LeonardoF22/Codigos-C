#include <stdio.h>
int main(){
	int termo1 = 1, termo2 = 1, proximo, i;
	printf("Sequencia de Fibonacci");
	printf("\n%i, ", termo1);
	printf("%i, ", termo2);
	for(i = 2; i <= 20; i++){ // 2 termos ja foram exibidos então o contador começa em 2
		proximo = termo1 + termo2;
		printf("%i, ", proximo);
		termo1 = termo2;
		termo2 = proximo;
	}
}

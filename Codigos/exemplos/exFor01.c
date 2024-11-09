#include <stdio.h>
int main(){
	int num, resultado, x;
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%i", &num);
	for(x = 0; x<= 10; x++){
		resultado = x * num;
		printf("\n%i x %i = %i", num, x, resultado);
	}
}

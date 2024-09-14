#include <stdio.h>
int main(){
	float altura, pesoideal;
	char sexo;
	
	printf("\nDigite o sexo: ");
	scanf("%c", &sexo);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	
	if(sexo == "M"){
		pesoideal = (72.7 * altura) - 58;
	} else {
		pesoideal = (62.1 * altura) - 44.7;
	}
	printf("\nSeu peso ideal e: %f", pesoideal);
	
}

#include <stdio.h>
float Celsius(float x){
	float resultado;
	resultado = (x-32)/1.8;
	return resultado;
}
int main(){
	float grausF, grausC;
	printf("Digite os graus Fahrenheit: ");
	scanf("%f", &grausF);
	grausC = Celsius(grausF);
	printf("\nGraus Fahrenheit -> %f", grausF);
	printf("\nGraus Celsius -> %f", grausC);
	
}

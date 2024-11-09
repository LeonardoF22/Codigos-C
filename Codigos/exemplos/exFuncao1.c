#include <stdio.h>
float calcularArea(float r){
	float a, pi;
	pi = 3.14;
	a = pi*(r*r);
	return a;
}

int main(){
	float area, raio;
	printf("Entre com o raio da circunferencia: ");
	scanf("%f", &raio);
	area = calcularArea(raio);
	printf("\nArea: %f", area);
}

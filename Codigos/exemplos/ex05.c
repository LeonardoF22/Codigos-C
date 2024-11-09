#include <stdio.h>
int main(){
	float nota1, nota2, nota3, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nDigite a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1*0.2) + (nota2*0.3) + (nota3*0.5);
	printf("Media final: %f", media);
}

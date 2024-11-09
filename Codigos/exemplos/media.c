#include<stdio.h>
int main(){
	float nota1, nota2, media;
	printf("Digite a nota 1: ");
	scanf("%f",& nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2) / 2;
	if (media >= 6){
		printf("Aluno aprovado \n");
		printf("Media: %.2f", media);
	} else if (media>= 4 && media < 6) {
		printf("Aluno de exame \n");
		printf("Media: %.2f", media);
	} else {
		printf("Aluno reprovado \n");
		printf("Media: %f", media);
	}
}

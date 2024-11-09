#include <stdio.h>
int main(){
	char nome[30], email[40];
	int idade;
	printf("Entre com o seu nome: ");
	fgets(nome, 30, stdin);
	printf("Entre com a idade: ");
	scanf("%i", &idade);
	printf("Entre com o seu e-mail: ");
	getchar();
	fgets(email, 40, stdin);
	printf("\nSeu nome: %s", nome);
	printf("\nSeu email: %s", email);
}

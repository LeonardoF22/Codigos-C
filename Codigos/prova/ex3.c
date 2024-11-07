#include <stdio.h>
int main(){
	int i, pontuacao;
	float salario;
	for(i = 0; i < 5 ; i++){
		printf("\nDigite o salario do funcionario: ");
		scanf("%f", &salario);
		printf("\nDigite a pontuacao do funcionario: ");
		scanf("%i", &pontuacao);
		
		if(pontuacao >= 1000){
			salario = salario + 500;
		} else if (pontuacao >= 500){
			salario = salario + 300;
		} else if (pontuacao >= 100){
			salario = salario + 100;
		} else if (pontuacao >= 1){
			salario = salario + 25;
		}
		
		printf("\nO salario desse funcionario passara a ser -> R$%f", salario);
	}
}

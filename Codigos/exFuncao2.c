#include <stdio.h>
float calcular(float vi, float vf, float ti, float tf){
	float aceleracao;
	aceleracao = (vf-vi)/(tf-ti);
	return aceleracao;
}
int main(){
	float vi, vf, ti, tf, resultado;
	printf("Entre com a velocidade inicial: ");
	scanf("%f", &vi);
	printf("\nEntre com a velocidade final: ");
	scanf("%f", &vf);
	printf("\nEntre com o tempo inicial: ");
	scanf("%f", &ti);
	printf("\nEntre com o tempo final: ");
	scanf("%f", &tf);
	resultado = calcular(vi, vf, ti, tf);
	printf("Resultado: %f", resultado);
}

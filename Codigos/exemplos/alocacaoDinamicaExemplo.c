#include<stdio.h>
#include<stdlib.h>

float media(int n, float *v){
	int i;
	float s;
	for(i=0;i<n;i++){
		s += v[i];
	}
	return s/n;
}

int main(){
	int i, n;
	float *v, med;
	printf("Quantas notas serao lidas?: ");
	scanf("%i", &n);
	v = (float *)malloc(n*sizeof(float));
	
	if(v == NULL){
		printf("Memoria Insuficiente!");
		return 1;
	} else {
		for(i=0;i<n;i++){
			printf("\nEntre com a nota %i: ",i);
			scanf("%f", &v[i]);
		}
		med = media(n,v);
		printf("\nMedia: %2.f", med);
		
		free(v);
	}
}

#include <stdio.h>
void altera(int *px, int *py){
	*px = 3;
	*py = 5;
}
int main(){
	int x,y;
	altera(&x, &y);
	printf("Valor de x: %i. Valor de y: %i", x,y);
}

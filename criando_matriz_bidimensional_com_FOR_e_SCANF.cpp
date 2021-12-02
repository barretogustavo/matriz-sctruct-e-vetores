#include <stdio.h>

int main(void){
	
	int m[3][3], l, c;
	
	printf("Digite os elementos da matriz 3x3: \n\n");
	
	for(l=0; l<3; l++)
		for(c=0; c<3; c++){
			printf("\nElemento[%d][%d] = ", l, c);
			scanf("%d", &m[l][c]);
		}
		
	printf("\n\n----------- Saida de dados ------------\n\n");
	
	for(l=0; l<3; l++)
		for(c=0; c<3; c++){
			printf("\nSaida elemento[%d][%d] = %d", l, c, m[l][c]);
		}
	
	return 0;
}

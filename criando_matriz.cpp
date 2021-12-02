#include <stdio.h>

int main(void){
	
	int m[2][2] = 
	{
		{10, 20},
		{30, 40}
	};
	
	printf("Exibindo uma matriz 2x2: \n\n");
	printf("Linha 0, Coluna 0 = %d \n", m[0][0]);
	printf("Linha 0, Coluna 1 = %d \n", m[0][1]);
	printf("Linha 1, Coluna 0 = %d \n", m[1][0]);
	printf("Linha 1, Coluna 1 = %d \n", m[1][1]);	
	
	
	return 0;
}

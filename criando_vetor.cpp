#include <stdio.h>

main( void ){
	
	float notas[4] = {7, 8.5, 3, 6.5};
	int i;
	
	printf("Exibindo notas do Vetor por posicao fixa e definida: \n");
	printf("Nota da posicao [0] = %.2f \n\n", notas[0]);
	
	
	printf("Exibindo todas as notas do vetor automaticamente com FOR: \n");	
	for(i=0; i<=3; i++){
		printf("Nota da posicao [%d] = %.2f \n", i, notas[i]);
	}
	
	return 0;
}

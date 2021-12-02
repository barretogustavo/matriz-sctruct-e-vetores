#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int matriz[2][3],l,c,menor;

	printf("Digite 3 números para cada uma das 2 linhas: \n\n");
	for (l=0;l<2;l++){
	  	
		for (c=0;c<3;c++){
		  printf("Número da linha %d da coluna %d: ",l+1, c+1);
	      scanf("%d",&matriz[l][c]);
		}
	}

	printf("\n-------------- Exibindo o MENOR valor por linha -------------- \n");	
	for (l=0;l<2;l++){
	printf("\nLinha %d", l+1);	
	menor = 999999999;
	
  		for (c=0;c<3;c++)
        { 
			if(matriz[l][c] < menor) menor = matriz[l][c];
        }
		printf("-> Menor número: %d", menor);
	}
}

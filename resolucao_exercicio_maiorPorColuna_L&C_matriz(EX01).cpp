#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

	int matriz[2][3],l,c,maior;

	printf("Digite 3 n�meros para cada uma das 2 linhas: \n\n");
	for (l=0;l<2;l++){
	  	
		for (c=0;c<3;c++){
		  printf("N�mero da linha %d da coluna %d: ",l+1, c+1);
	      scanf("%d",&matriz[l][c]);
		}
	}

	printf("\n-------------- Exibindo o MAIOR valor por COLUNA -------------- \n");	
	for (c=0; c<3; c++){	
	maior = 0;	
  		for (l=0;l<2;l++)
        { 
			if(matriz[l][c] > maior) maior = matriz[l][c];
        }
		printf("-> Maior n�mero da coluna %d: %d \n", c+1, maior);
	}	
	return 0;
}

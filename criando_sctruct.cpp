#include <stdio.h>
#include <string.h> //Usei essa biblioteca para colocar letras tudo maiúsculas

main(void){
	
	struct ficha_aluno{
		char nome[40];
		int id;
		float nota;
	};
	struct ficha_aluno aluno;
	
	printf("--------------------- Pegando dados para preencher a ficha do aluno ---------------------\n\n");
	
	printf("\nNome do aluno.: ");
	fgets(aluno.nome, 40, stdin); //Função gets serve como o scanf da variável tipo char
	printf("\nID do aluno.: ");
	scanf("%d", &aluno.id);
	printf("\nNota do aluno.: ");
	scanf("%f", &aluno.nota);
	
	printf("\n\n--------------------- Exibindo os dados do aluno ---------------------\n");
	
	strupr(aluno.nome); //Função que deixa a letra maiúscula
	printf("Nome do aluno.........: %s", aluno.nome);
	printf("ID do aluno...........: %d\n", aluno.id);
	printf("Nota do aluno.........: %.2f\n", aluno.nota);
	return 0;
}

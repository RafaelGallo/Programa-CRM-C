#include <stdio.h>
#define SIZE 200

//Variaveis do programa
char nome[SIZE][50];
char email[SIZE][50];
int data[SIZE][50];
int op;
void cadastro ();

//Função principal do programa
int main(void){
	cadastro();
}

//Nomes de funcionarios.
void cadastro (){
	static int linha;
	do{

        //Nome dos funcionarios
		printf("\nDigite o nome do funcionario 1: ");
			scanf("%s", &nome[linha]);
		printf("\nDigite o nome do funcionario 2: ");
			scanf("%s", &nome[linha]);
		printf("\nDigite o nome do funcionario 3: ");
			scanf("%s", &nome[linha]);
		printf("\nDigite o nome do funcionario 4: ");
			scanf("%s", &nome[linha]);
        printf("\nDigite o nome do funcionario 5: ");
            scanf("%s", &nome[linha]);

		printf("\nDigite 1 para continuar ou 2 para sair:");
		scanf("%d", &op);
		printf("\nCadastro com Sucesso ! ");
		linha=linha+1;
	}while(op==1);
}


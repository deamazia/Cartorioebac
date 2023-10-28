#include <stdio.h> //comunica��o com o usu�rio//
#include <stdlib.h> //loca��o de lugares//
#include <locale.h> //biblio de aloca��o de texto por regi�o//
#include <string.h>//biblioteca das string

int registro()
{
	setlocale(LC_ALL, "Portuguese");
	
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite seu CPF: \n");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Respos�vel por copiar o valores das str
	
	FILE *file; //cria arquivo
	file = fopen(arquivo, "w"); //cria arquivo
	fprintf(file,cpf);
	fclose(file); //fechamento do arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite seu nome: \n");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,", ");
	fclose(file);
	
	printf("Digite seu sobrenome:  \n");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo , "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite seu cargo: \n");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	system("pause");
}

int consulta()
{
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: \n");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("CPF indispon�vel, n�o foi poss�vel localizar. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: \n");
	scanf("%s,cpf");
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!. \n");
		system("pause");
	}
}


int main()
{
	int opcao=0;
	int x=1;
	char senhadigitada[]="a";
	int comparacao;
	
	printf("***Cartorio da EBAC*** \n\n");
	printf("Login de administrador.\n\nDigite a sua senha : ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
	
		system("cls");
		for(x=1;x=1;)
		{
			
		setlocale(LC_ALL, "Portuguese");
	
	
		printf("***Cart�rio da EBAC*** \n\n");
		printf("Escolha a op��o desejada no menu, por favor: \n\n");
		printf("\t 1 - Registre seu nome. \n");
		printf("\t 2 - Cosulte um nome. \n");
		printf("\t 3 - Deletar um usu�rio. \n \n");
		printf("\t 4- Sair do sistema. \n\n");
		printf("\t Op��o: \n");
	
		scanf("%d", &opcao);
	
		system("cls");
	
	
		switch(opcao)
		{
			case 1:
			registro();
			break;
		
			case 2:
			consulta();
			break;
		
			case 3:
			deletar();
			break;
		
			case 4:
			printf("Obrigada por usar o sistema. \n");
			return 0;
			break;
		
			default:
			printf("Essa op��o n�o esta dispon�vel \n");
			system("pause");
			break;
			
		}
	}
	}
	else
		printf("Senha incorreta.");
}


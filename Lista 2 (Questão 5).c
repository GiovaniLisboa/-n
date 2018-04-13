#include<stdio.h>

typedef struct {
	char nome[20];
	int matricula;
	float nota1;
	float nota2;
} aluno;

void cadastrar(aluno *);
void imprimir(aluno *);

main(){
	aluno n[4];
	int i;
	
	for(i = 0; i <= 3; i++)
	{
		cadastrar(&n[i]);
	}

	for(i = 0; i <= 3; i++)
	{
		imprimir(&n[i]);
	}
	
	return (0);
}

void cadastrar(aluno *a)
{
	printf("Entre com o nome: ");
	scanf("%s", &a->nome);
	printf("Entre com a matricula: ");
	scanf("%d", &a->matricula);
	printf("Entre com a primeira nota: ");
	scanf("%f", &a->nota1);
	printf("Entre com a segunda nota: ");
	scanf("%f", &a->nota2);
	printf("\n");
}

void imprimir(aluno *a)
{
	float media = (a->nota1 + a->nota2)/2;
	printf("\nNome: %s", a->nome);
	printf("\nMatricula: %d", a->matricula);
	printf("\nMedia: %f \n", media);
}

#include<stdio.h>

typedef struct {
	char nome[20];
	int codigo;
	float preco;
} produto;

void cadastrar(produto *);
void imprimir(produto *);
void localizar(int, produto *);

main(){
	produto n[2];
	int i;
	int loc;
	
	for(i = 0; i <= 1; i++)
	{ 
		cadastrar(&n[i]);
	}
	
	printf("LISTA DE PRODUTOS\n");
	for(i = 0; i <= 1; i++)
	{ 
		imprimir(&n[i]);
	}
	
	printf("\nInsira o codigo do produto a ser pesquisado: ");
	scanf("%d", &loc);
	
	for(i = 0; i <= 1; i++)
	{
		localizar(loc, &n[i]);
	}
	
	return (0);
}

void cadastrar(produto *p)
{
	printf("Entre com o nome do produto: ");
	scanf("%s", &p->nome);
	printf("Entre com o codigo do produto: ");
	scanf("%d", &p->codigo);
	printf("Entre com o preco do produto: ");
	scanf("%f", &p->preco);
	printf("\n");
}

void imprimir(produto *p)
{
	printf("Produto: %s", p->nome);
	printf("\nCodigo: %d", p->codigo);
	printf("\n");
}

void localizar (int temp, produto *p)
{
	if (p->codigo == temp) {
		printf("Produto: %s", p->nome);
		printf("\nPreco: %f", p->preco);
		}
}

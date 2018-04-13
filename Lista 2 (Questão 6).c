#include<stdio.h>

typedef struct {
	char nome[20];
	int cpf;
	float altura; //em m
	float peso;
	int sexo; // 0 -> M / 1 -> H
} pessoa;

void cadastrar(pessoa *);
void localizar(int , pessoa *);

main(){
	pessoa n[2];
	int i;
	int cpf_loc;
	
	for(i = 0; i <= 1; i++)
	{
		cadastrar(&n[i]);
	}
	
	printf("\nEntre com o CPF a ser pesquisado: ");
	scanf("%d", &cpf_loc);
	
	for(i = 0; i <= 1; i++)
	{
		localizar(cpf_loc, &n[i]);
	}
	
	return (0);
}

void cadastrar(pessoa *p)
{
	printf("Entre com o nome: ");
	scanf("%s", &p->nome);
	printf("Entre com o CPF: ");
	scanf("%d", &p->cpf);
	printf("Entre com a altura (em m): ");
	scanf("%f", &p->altura);
	printf("Entre com o peso (em kg): ");
	scanf("%f", &p->peso);
	printf("Entre com o sexo (0 -> M / 1 -> H): ");
	scanf("%d", &p->sexo);
	printf("\n");
}

void localizar (int temp, pessoa *p)
{
	if (p->cpf == temp) {
		float imc;
		imc = (p->peso)/((p->altura) * (p->altura));
		printf("\nIMC: %f", imc);
		}
}

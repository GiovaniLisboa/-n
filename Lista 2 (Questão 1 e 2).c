#include<stdio.h>

typedef struct {
	char nome[20];
	double salario;
	int idade;
	int sexo; // 0 -> M / 1 -> H
} REG;

void atribuir(REG *);

main(){
	REG pessoa1;
	
	atribuir(&pessoa1);
	
	printf("\nSalario: %d", pessoa1.salario);
}

void atribuir (REG *registro)
{
	printf("Entre com o valor do salario: ");
	scanf("%d", &registro->salario);
}

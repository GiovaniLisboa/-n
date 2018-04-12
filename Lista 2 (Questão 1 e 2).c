#include<stdio.h>

struct REG {
	char nome[20];
	double salario;
	int idade;
	bool sexo;
};

void atribuir(REG &);

main(){
	struct REG pessoa1;
	
	atribuir(pessoa1);
	
	printf("\nSalario: %d", pessoa1.salario);
}

void atribuir (REG &registro)
{
	printf("Entre com o valor do salario: ");
	scanf("%d", &registro.salario);
}

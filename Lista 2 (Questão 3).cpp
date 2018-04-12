#include<stdio.h>
#include <math.h>

struct ponto {
	int x;
	int y;
};

void lerPontos(ponto &);
double calcular(ponto &, ponto &);

main(){
	struct ponto A;
	struct ponto B;
	struct ponto C;
	struct ponto D;
	struct ponto E;
	
	double distAB;
	double distAC;
	double distAD;
	double distAE;
		
	printf("PONTO A\n");
	lerPontos(A);
	
	printf("PONTO B\n");
	lerPontos(B);
	
	printf("PONTO C\n");
	lerPontos(C);
	
	printf("PONTO D\n");
	lerPontos(D);
	
	printf("PONTO E\n");
	lerPontos(E);
	
	distAB = calcular(A, B);
	distAC = calcular(A, C);
	distAD = calcular(A, D);
	distAE = calcular(A, E);
	
	int menor = distAB;
	
	if (distAC < menor)
		{menor = distAC;}
		else if (distAD < menor)
			{menor = distAD;}
			else if(distAE < menor)
				menor = distAE;
				
	if (menor == distAB)
		{printf("\nB e o ponto mais proximo de A!");}
		else if (menor == distAC)
			{printf("\nC e o ponto mais proximo de A!");}
			else if (menor == distAD)
				{printf("\nD e o ponto mais proximo de A!");}
				else if (menor == distAE)
					printf("\nE e o ponto mais proximo de A!");
}

void lerPontos (ponto &p)
{
	printf("Entre com o valor da coordenada X: ");
	scanf("%d", &p.x);
	printf("Entre com o valor da coordenada Y: ");
	scanf("%d", &p.y);
}

double calcular (ponto &p1, ponto &p2)
{
	double d;
	d = sqrt (pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	return d;
}

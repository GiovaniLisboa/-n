#include<stdio.h>

typedef struct{
	int direita;
	int esquerda;
} real;

void criar(real *);
float retornar (real *);

main(){
	real n1;
	real n2;
	
	criar(&n1);
	
	printf("\nesquerda: %d", n1.esquerda);
	printf("\ndireita: %d", n1.direita);
	printf("\n");
	
	printf("\n%f", retornar(&n1));
	
		
	return (0);
}

void criar(real *r){
	float real_temp;
	float fracao;
	int d_temp;
	
	printf("Numero real: %f", real_temp);
	scanf("%f", real_temp);
	
	r->esquerda = (int) real_temp;
	
	fracao = ((real_temp) - (r->esquerda))*1000;
	d_temp = (int) fracao;
	
	if (d_temp % 100 == 0){
		r->direita = d_temp/100;
	}	else if (d_temp % 10 == 0) {
			r->direita = d_temp/10;
		} else r->direita = d_temp;
}

float retornar (real *r){
	float real_temp;
	float d_temp = (float) r->direita;
	
	if (r->direita < 10){
		d_temp = r->direita/10;
	}	else if (r->direita < 100){
			d_temp = r->direita/100;
		}	else if (r->direita < 1000){
				d_temp = r->direita/1000;
			}
		
	real_temp = r->esquerda + d_temp;
	
	return real_temp;
}

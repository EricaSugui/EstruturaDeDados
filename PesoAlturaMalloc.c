#include <stdio.h>
#include <stdlib.h>
#define alturaMaxima 255

typedef struct {
	int peso;
	int altura;
} PesoAltura;

int main() {
	PesoAltura *pessoa1 = (PesoAltura *)malloc(sizeof(PesoAltura));
	pessoa1->peso = 80;
	pessoa1->altura = 185;
	printf("Peso: %i, Altura %i. ", pessoa1->peso, pessoa1->altura);
	if(pessoa1->altura>alturaMaxima)
		printf("Altura acima da m~áxima.\n");
	else
		printf("Altura abaixo da máxima.\n");
	return 0;
}

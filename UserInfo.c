#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[50];
	int idade;
	float peso;
	
	printf("Qual eh o seu nome?: ");
	scanf("%s", &nome);
	
	printf("Quantos anos voce tem?: ");
	scanf("%d", &idade);
	
	printf("Qual eh o seu peso? (Kg): ");
	scanf("%f", &peso);
	
	printf("Muito prazer, %s. Voce tem %d anose peso de %.2fKg, correto?\n\tFIM", nome, idade, peso);
	
	
	
	return 0;
}

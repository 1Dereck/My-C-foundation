#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float viagem, taxa1, taxa2;
	
	printf("Viagens ate 200km R$0.50/km\n");
	printf("A partir de 200km R$0.35/km\n");
	
	printf("Distancia total da viagem, em Km: ");
	scanf("%f", &viagem);
	
	if (viagem < 200) {
		printf("Uma viajem de %.2f km vai custar R$0.50/Km.\n", viagem);
		taxa1 = 0.50 * viagem;
		printf("Valor Total: R$%.2f\n", taxa1);
	} else {
		printf("Uma viajem de %.2f Km vai cusar R$0,35/Km.\n", viagem);
		taxa2 = 0.35 * viagem;
		printf("Valor Total: R$%2.2f.\n", taxa2);
	}
	
	
	return 0;
}

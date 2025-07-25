#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("Me diaga dois numeros e eu colocarei os dois em ordem crescente.\n");
	
	printf("Primeiro numero: ");
	scanf("%d", &x);
	
	printf("Segundo numero: ");
	scanf("%d", &y);
	
	if (x > y) {
		printf("O numero em ordem sao %d e %d", x, y);
	} else if (x < y) {
		printf("O numero em ordem sao %d e %d", y, x);
	}
	return 0;
}

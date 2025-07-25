#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero, multiplic, resultado;
	
	printf("Numero desejado para multiplicar: ");
	scanf("%d", &numero);
	
	for (multiplic = 0; multiplic <= 10; multiplic = multiplic + 1) {
		resultado = numero * multiplic;
		printf("%d X %d = %d\n", numero, multiplic, resultado);
	}
	return 0;
}

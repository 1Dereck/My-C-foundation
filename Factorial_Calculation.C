#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fatorial, resposta = 1;
	
	for(fatorial = 10 ; fatorial >= 1; fatorial = fatorial - 1) {
		printf("resposta = %d\n", resposta);
		resposta = resposta * fatorial;
	}
	printf("Resultado final %d", resposta);
	return 0;
}

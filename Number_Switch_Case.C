#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	printf("Informe numero\n");
	scanf("%d", &numero);
	
	switch (numero) {
		case 2:
			printf("numero 2\n");
			break;
        case 4:
        	printf("numero 4\n");
        	break;
        case 6:
        	printf("numero 6\n");
        	break;
        default:
        	printf("opcao nao valida\n");
        	break;
	}
	return 0;
}

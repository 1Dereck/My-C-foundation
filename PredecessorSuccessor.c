#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Digite um numero: ");
	scanf("%d", &a);
	b = a - 1;
	c = a + 1;
	
	printf("Analisando o numero %d, seu antecessor eh %d e seu sucessor eh %d.", a, b, c);
	return 0;
}

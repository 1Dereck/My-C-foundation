#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("Este numero eh PAR");
	} else {
		printf("Este numero eh IMPAR");
	}
	return 0;
}

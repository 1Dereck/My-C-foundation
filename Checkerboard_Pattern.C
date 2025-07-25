#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lin, col, n;
	printf("qual o tamanho do tabuleiro?\n");
	scanf("%d", &n);
	
	for(lin = 1; lin <= n; lin++)
	{
		printf("\n");
		for(col = 1; col <= n; col++)
		{
			if((lin + col) %2 == 0)
			{
				printf("x");
			} 
			else
			{
				printf("O");
			}
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}

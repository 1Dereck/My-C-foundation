#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x = 1;
	while (x <= 10) {
		printf("%d\n", x);
		x = x + 3;
	}
	return 0;
}

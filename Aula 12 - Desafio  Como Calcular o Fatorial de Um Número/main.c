#include <stdio.h>

int main () {
	
	// Fatorial de cinco --> 5 x 4 x 3 x 2 x 1
	int fatorial = 5;
	int resposta = 1;
	
	for ( ; fatorial >= 1; --fatorial ) {
		resposta *= fatorial;
	}
	
	printf("O numero fatorial e %i\n", resposta);
	
	return 0;
}

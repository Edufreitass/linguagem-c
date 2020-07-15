#include <stdio.h>

int main(void) {
	
	void teste(void);
	
	teste();
	teste();
	teste();	
	
	return 0;
}

void teste(void) {
	
	int variavel = 2;
	variavel *= 2;
	
	static int variavelEstatica = 2;
	variavelEstatica *= 2;
	
	
	printf("Local Automatica = %i\n", variavel);
	printf("Local Estatica = %i\n", variavelEstatica);
}

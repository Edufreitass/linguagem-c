#include <stdio.h>

int variavelGlobal = 2;

int main(void) {
	
	void teste(void);
	
	printf("Global = %i\n", variavelGlobal);
	teste();
	teste();	
	
	return 0;
}

void teste(void) {
	
	int variavel = 2;
	variavel *= 2;
	
	static int variavelEstatica = 2;
	variavelEstatica *= 2;
	
	variavelGlobal *= 2;
	
	printf("Local Automatica = %i\n", variavel);
	printf("Local Estatica = %i\n", variavelEstatica);
	printf("Global = %i\n", variavelGlobal);
}

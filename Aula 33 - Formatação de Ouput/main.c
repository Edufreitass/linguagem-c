#include <stdio.h>

int main (void) {
	
	int intVar = 9999999;
	int intVar2 = 10;
	double doubleVar = 100.123456789;
	
	//Formatacao variaveis inteiras
	printf("Variavel inteira (%%d) = %d\n", intVar);
	printf("Variavel inteira (%%i) = %i\n", intVar);
	printf("Variavel inteira (%%x) = %x\n", intVar);
	printf("Variavel inteira (%%o) = %o\n", intVar);
	printf("\n");
	
		//Formatacao variaveis float e double
	printf("Variavel double (%%f) = %f\n", doubleVar);
	printf("Variavel double (%%e) = %e\n", doubleVar);
	printf("Variavel double (%%g) = %g\n", doubleVar);
	printf("Variavel double (%%a) = %a\n", doubleVar);
	printf("\n");
	
	return 0;
}

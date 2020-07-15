#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float soma(float num1, float num2);
	
	int a, b, cont;
	
	printf("Digite 2 numeros: ");
	scanf("%f, &a");
	scanf("%f, &b");
	
	cont = soma(a, b);	
	
	printf("A soma e %f\n", cont);
	
	system("pause");
	return 0;
}

float soma (float num1, float num2) {
	
	float valorAbsoluto (float x);
	
	if(num1 < 0){
		num1 = valorAbsoluto(num1);
	}
	if(num2 < 0) {
		num2 = valorAbsoluto(num2);
	}
	
	return num1 + num2;
	
}

float valorAbsoluto (float x) {
	
	return x * -1;
}

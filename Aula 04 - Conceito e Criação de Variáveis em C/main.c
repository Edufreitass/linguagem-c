#include <stdio.h>
#include <locale.h> //Biblioteca de acentua��o e idioma

int main ()
{
	setlocale(LC_ALL, "Portuguese"); //configura o idioma do programa
	
	int minhaIdade;
	
	minhaIdade = 23;
	
	printf("Minha idade � %i.\n", minhaIdade);
		
	return 0;
}

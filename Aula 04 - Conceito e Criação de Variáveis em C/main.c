#include <stdio.h>
#include <locale.h> //Biblioteca de acentuação e idioma

int main ()
{
	setlocale(LC_ALL, "Portuguese"); //configura o idioma do programa
	
	int minhaIdade;
	
	minhaIdade = 23;
	
	printf("Minha idade é %i.\n", minhaIdade);
		
	return 0;
}

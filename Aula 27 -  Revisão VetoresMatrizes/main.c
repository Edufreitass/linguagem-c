#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	const int bimestresAnuais = 4;
	const int numeroDeAlunos = 4;
	
	float notasAlunos[numeroDeAlunos][bimestresAnuais] = {0};
	float mediasAlunos [numeroDeAlunos] = {0};
	
	float media = 0;
	
	printf("Insira as 4 notas do aluno 1:\n");
	
	int aluno;
	int notas;
	
	for (aluno = 0; aluno < numeroDeAlunos; ++aluno) {
		for (notas = 0; notas < bimestresAnuais; ++notas) {
			scanf("%f", &notasAlunos[aluno][notas]);
			media += notasAlunos[aluno][notas];
		}
		mediasAlunos[aluno] = media / bimestresAnuais;
		media = 0;
		printf("Insira as 4 notas do aluno %i:\n", aluno + 2);
	}
	
	for (aluno = 0; aluno < numeroDeAlunos; ++aluno) {
		printf("A media do aluno %i e %.2f\n", aluno + 1, mediasAlunos[aluno]); /*precisão do numero de casas decimais,por exemplo ,ele colocou ali %.2f,ou seja,se eu digitar o valor 10.5,
		o programa irá mostrar 10.50,e e isso pode ser feito com quantas casas decimais vc quiser: %.1f, %.3f [...],e caso vc n coloque a precisão,coloque apenas o "%f" ,
		o programa irá retornar 10.500000000,por exemplo,espero ter ajudado ;)*/
	}
	
	system("pause");
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int matriz [5][5] = {{1,  2,  3,  4,  5}, //linhas | colunas
						{ 6,  7,  8,  9, 10},
						{11, 12, 13, 14, 15},
						{16, 17, 18, 19, 20},
						{21, 22, 23, 24, 25}};
	
	int m;
	int n;
	
	for (m = 0; m < 5; ++m)  {
		for (n = 0; n < 5; ++n) {
			printf("%i ", matriz [m][n]);
		}
		printf("\n");
	}
	
	system("pause");
}

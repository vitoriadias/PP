// LAB06_12011EBI018
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void trocaespaco(char str[], int vetor[]) {
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			str[i] = '_';
			vetor[j] = i;
			j++;
		}
	}
	printf("\n%s\n", str);

	printf("\n posicao dos espacos: \n");
	for (int h = 0; h <j; h++) {
		printf("%d ", vetor[h]);
	}
}

int main(){
	char str[200];
	int vetor[200];
	printf("digite o texto: ");
	fflush(stdin);
	fgets(str, 200, stdin);
	trocaespaco(str, vetor);

	return 0;

}


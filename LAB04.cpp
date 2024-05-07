// EXERCICIO2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>

int primo(int a) {
	int flag, cont = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cont = cont++;
		}
	}
	if (cont > 2) {
		flag = 1;
	}
	else {
		flag = 0;
	}

	return flag;
}

int main()
{
	int opcao;
	int a = 0;
	while (a != 1) {
		printf("\ndigite:\n 1 - indicar se e primo\n 2 - listar todos os primos de um intervalo\n 3 - sair\n ");
		scanf_s("%d", &opcao);

		switch (opcao)
		{
		case 1: {
			int numero, saida;
			printf("\ndigite um numero: ");
			scanf_s("%d", &numero);
			saida = primo(numero);
			printf("\n%d\n", saida);
			break; }

		case 2: {
			int num1 = 0, num2 = 1;
			while (num1 < num2) {
				system("cls");
				printf("\ndigite dois numeros: ");
				scanf_s("%d %d", &num1, &num2);
			}

			for (num2; num2 <= num1; num2++) {
				if (primo(num2) == 0) {
					if (num2 != 1) {
						printf("\n%d", num2);
					}	
				}

			}
			break; }
		case 3: {
			a = 1;
			break; 
		}
		}
	}

	return 0;

}



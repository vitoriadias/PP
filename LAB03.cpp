// PP LAB03 12011EBI018
// Vitoria Dias Brito
#include <stdio.h>
#include <stdlib.h>

void ordemdecrescente(int N) { //funcao q poe na ordem decrescente
    printf("numeros impares de %d ate 1 em ordem decrescente:\n", N);
    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void ordemcrescente(int N) { //funcao q poe na ordem crescente
    printf("numeros pares de 100 ate %d em ordem crescente:\n", N);
    for (int i = 100; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

float calculardividacartao(float debt) { //funcao q calcula a divida
    float jurosmensais = 0.075; // 7.5% de juros mensais
    for (int i = 0; i < 36; i++) { // 3 anos = 36 meses
        debt *= (1 + jurosmensais);
    }
    return debt;
}

int main() { //funcao principal
    int choice, N;
    float debt;

    do {
        printf("\nescolha uma opcao:\n");
        printf("1 - imprimir numeros impares de N ate 1 em ordem decrescente\n");
        printf("2 - imprimir numeros pares de 100 ate N em ordem crescente\n");
        printf("3 - calcular divida de cartao de credito apos 3 anos\n");
        printf("4 - sair\n");
        scanf_s("%d", &choice);  //entrada - recebe a opcao do usuario

        switch (choice) {
        case 1:
            printf("digite um numero N: ");
            scanf_s("%d", &N); //recebe o numero
            ordemdecrescente(N); //chama a funcao
            break;
        case 2:
            printf("digite um numero N: ");
            scanf_s("%d", &N);  //recebe o numero
            ordemcrescente(N);  //chama a funcao
            break;
        case 3:
            printf("digite o valor da divida do cartao de credito: ");
            scanf_s("%f", &debt);  //recebe o valor da divida
            printf("divida apos 3 anos: %.2f\n", calculardividacartao(debt)); //imprime e chama a funcao
            break;
        case 4:
            printf("saindo do programa...\n");
            break;
        default:
            printf("opcao invalida! escolha novamente.\n");
        }
    } while (choice != 4);

    return 0;
}


// PP_LAB01_12011EBI0018
// Vitória Dias Brito

#include <iostream>
#include <stdio.h>

int main()
{
    int number1, number2, number3, aux;
    printf("digite tres numeros inteiros: "); //entrada
    scanf_s("%d %d %d", &number1, &number2, &number3);

    if (number1 > number2) {  // se o primeiro num for maior q o segundo eles trocam de posicao
        aux = number1;
        number1 = number2;
        number2 = aux;
    }
    if (number2 > number3) { // se o segundo for maior q o terceiro eles trocam de posicao
        aux = number2;
        number2 = number3;
        number3 = aux;
    }
    if (number1 > number2) { // faz o mesmo
        aux = number1;
        number1 = number2;
        number2 = aux;
    }

    printf("\nos numeros em ordem crescente sao: %d %d %d\n", number1, number2, number3); //saida
    return 0;

}

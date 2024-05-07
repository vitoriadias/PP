// LAB07_12011EBI018
// Vitória Dias Brito

#include <iostream>
#include <stdio.h>


void criavetor(int n, int vetor[], int pos) {

    if (pos == n) {
        return;
    }
    else {
        printf("\ndigite o elemento da posicao %d: ", pos);
        scanf("%d", &vetor[pos]);
        criavetor(n, vetor, pos + 1);
    }
}


int main()
{
    int n, vetor[100], pos = 0;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);
    criavetor(n, vetor, pos);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);

    }
    return 0;
}

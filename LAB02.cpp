// Vitória Dias Brito 12011EBI018
// PP_Lab02_12011EBI018

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod_estado = 0, cod_carga = 0;
    float imposto = 0, peso_carga, peso_kg, preco, valor_imp, valor_total;

    while (cod_estado < 1 || cod_estado > 5 ){
        system("cls");
        printf("digite o codigo do estado de origem: ");
        scanf_s("%d", &cod_estado);
    }
    switch (cod_estado)
    {
    case 1:
        imposto = 0.35;
        break;
    case 2:
        imposto = 0.25;
        break;
    case 3:
        imposto = 0.15;
        break;
    case 4:
        imposto = 0.05;
        break;
    case 5:
        imposto = 0;
        break;
    }
    printf("digite o peso da carga: ");
    scanf_s("%f", &peso_carga);
    peso_kg = peso_carga * 1000;

    while (cod_carga < 10 || cod_carga > 40) {
        system("cls");
        printf("digite o codigo da carga: ");
        scanf_s("%d", &cod_carga);
    }
    if (cod_carga >= 10 && cod_carga <= 20) {
        preco = 100 * peso_kg;
    }
    else if (cod_carga >= 21 && cod_carga <= 30) {
        preco = 250 * peso_kg;
    }
    else if (cod_carga >= 31 && cod_carga <= 40) {
        preco = 340 * peso_kg;
    }
    valor_imp = imposto * preco;
    valor_total = preco + valor_imp;
    //printf("%f", imposto);

    printf("o preco sera: %f\no peso sera: %f\n",preco,peso_kg);
    printf("o valor do imposto sera: %f\n", valor_imp);
    printf("o valor total sera: %f\n", valor_total);

    return 0;
}

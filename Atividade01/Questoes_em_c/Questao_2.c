#include <stdio.h>;

/*2. Leia o valor do dólar
e um valor em dólar, calcule e escreva o equivalente
em real (R$).*/

main()
{

    int valor_em_dolar;
    int valor_em_real;

    printf("Digite um valor em dólar: ");
    scanf("%f", &valor_em_dolar);

    valor_em_real = valor_em_dolar * 5.10;

    printf("valor em dólar: %.2f\nvalor em real: %.2f", valor_em_dolar, valor_em_real);
}
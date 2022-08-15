#include <stdio.h>

/*9. Leia o valor da base e altura de um triângulo, calcule e
escreva sua área. (área=(base * altura)/2)*/

main()
{
    float altura, base, area;

    printf("Digite o valor da base do triangulo: \n=> ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: \n=> ");
    scanf("%f", &altura);

    area = (altura * base) / 2;
    printf("area do triangulo: %.2f", area);
}

#include <stdio.h>
#include <math.h>

/*11. Leia o valor da base e altura de um retângulo, calcule e
escreva sua área. (área = base * altura)*/

main()
{
    float base, altura;

    printf("Digite o valor da base do retagulo: \n=> ");
    scanf("%f", &base);
    printf("Digite a altura do retagulo: \n=> ");
    scanf("%f", &altura);

    float area = base * altura;
    printf("area do retangulo: %.2f", area);
}

#include <stdio.h>
#include <math.h>

/*10. Leia o valor do lado de um quadrado, calcule e
escreva sua área. (área = lado2)*/

main()
{
    float lado, area;

    printf("Digite o valor d lado do quadrado: \n=> ");
    scanf("%f", &lado);

    area = pow(lado, 2);
    printf("area do quadrado: %.2f", area);
}

#include <stdio.h>
#include <math.h>

/*13. Leia o valor do raio de uma esfera, calcule e
escreva seu volume. (v = (4 * pi * r3) / 3) (pi = 3,14)*/

main()
{
    float raio, pi = 3.14;

    printf("Digite o valor do raio da esfera: \n=> ");
    scanf("%f", &raio);

    float volume = (4 * pi * (pow(raio, 3))) / 3;
    printf("volume da esfera: %.2f", volume);
}

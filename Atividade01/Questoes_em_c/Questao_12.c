#include <stdio.h>

/*12. Leia o valor do raio de uma circunferência, calcule e
escreva seu comprimento.(c = 2 * pi *r)*/

main()
{
    float raio, pi = 3.14;

    printf("Digite o valor do raio da cincunferencia: \n=> ");
    scanf("%f", &raio);

    float comprimento = 2 * pi * raio;
    printf("comprimento da circunferencia: %.2f", comprimento);
}

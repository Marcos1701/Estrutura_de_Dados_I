#include <stdio.h>;

/*1. Leia uma velocidade em m/s, calcule e
escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)*/

main()
{

    float velocidade_m_s;
    float velocidade_km_h;

    printf("Digite o valor em m/s : ");
    scanf("%f", &velocidade_m_s);

    velocidade_km_h = velocidade_m_s * 3.6;

    printf("%.2f em m/s equivale a %.2f km/h", velocidade_m_s, velocidade_km_h);
}

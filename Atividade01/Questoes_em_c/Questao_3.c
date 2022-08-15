#include <stdio.h>

/* 3. Leia uma velocidade em km/h,
 calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6) */

main()
{

    float velo_hm_h, velo_ms_s;

    printf("Digite o valor em km/h: ");
    scanf("%f", &velo_hm_h);

    velo_ms_s = velo_hm_h / 3.6;

    printf("%.2f km/h equivale a %.2f m/s.", velo_hm_h, velo_ms_s);
}
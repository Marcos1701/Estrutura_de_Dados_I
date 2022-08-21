#include <stdio.h>

main()
{

    float A, B, C, area;

    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A)
    {
        printf("Perimetro = %.1f", A + B + C);
    }
    else
    {
        float Maior_base = A > B ? A : B;
        float menor_base = A > B ? B : A;

        area = ((Maior_base + menor_base) * C) / 2;

        printf("Area = %.1f", area);
    }
}
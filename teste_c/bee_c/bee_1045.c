#include <stdio.h>
#include <math.h>

main()
{

    float A, B, C, aux;

    scanf("%f %f %f", &A, &B, &C);

    for (int i = 0; i < 2; i++)
    {
        if (A < B)
        {
            aux = A;
            A = B;
            B = aux;
        }
        if (B < C)
        {
            aux = B;
            B = C;
            C = aux;
        }
    }

    // gerar_retorno(A, B, C);

    if (A >= (B + C))
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if (pow(A, 2) == (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO RETANGULO\n");
        if (pow(A, 2) > (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(A, 2) < (pow(B, 2) + pow(C, 2)))
            printf("TRIANGULO ACUTANGULO\n");
        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        if (A == B || B == C || A == C)
            printf("TRIANGULO ISOSCELES\n");
    }
}

/* gerar_retorno(a, b, c)
{

    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO RETANGULO\n");
        if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO OBTUSANGULO\n");
        if (pow(a, 2) < (pow(b, 2) + pow(c, 2)))
            printf("TRIANGULO ACUTANGULO\n");
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        if (a == b || b == c || a == c)
            printf("TRIANGULO ISOSCELES\n");

        printf("%f %f %f", a, b, c);
    }
} */
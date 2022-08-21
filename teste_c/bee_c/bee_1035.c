#include <stdio.h>
//#include <stdbool.h>

int main()
{

    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int x = A + B, y = D + C;

    if (B > C && D > A && (y > x) && C >= 0 && D >= 0 && A % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
}

/*int main()
{

    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int conferir(A, B, C, D);

    if (conferir(A, B, C, D))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
}

conferir(a, b, c, d)
{
    int x = a + b, y = d + c;
    if (b > c && d > a && y > x && c >= 0 && d >= 0 && a % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
*/
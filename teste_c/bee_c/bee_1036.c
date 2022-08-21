#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, delta, raiz_1, raiz_2;

    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b, 2)) - 4 * a * c;

    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        raiz_1 = ((b * -1) + sqrt(delta)) / (2 * a);
        raiz_2 = ((b * -1) - sqrt(delta)) / (2 * a);

        printf("R1 = %.5f\n", raiz_1);
        printf("R2 = %.5f\n", raiz_2);
    }
}
#include <stdio.h>

/*6. Leia o salário de um trabalhador e
escreva seu novo salário com um aumento de 25%.*/

main()
{
    int salario, novo_salario;

    printf("Digite o salario a seguir: ");
    scanf("%d", &salario);

    novo_salario = salario + (salario * 0.25);
    printf("Seu novo salario e: R$ %d", novo_salario);
}

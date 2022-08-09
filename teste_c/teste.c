#include <stdio.h>

/*
pegar_numeros_sem_restricao(msg) {

    let valor = Number(input(msg))

    while (isNaN(valor)) {
        console.log('Valor inválido!!')
        valor = Number(input(msg))
    }
    return valor
}
*/

int main()
{
    int get_num(msg), valor_soma;
    int valor_1 = get_num("Digite o primeiro valor: \n=> ");
    int valor_2 = get_num("Digite o segundo valor: \n=> ");

    valor_soma = valor_1 + valor_2;

    printf("%d\n", valor_soma);
    system("PAUSE");
}

int get_num(msg)
{
    printf(msg);
    int valor;
    int resultado = scanf("%d", &valor);
    while (resultado != 1)
    {
        printf("Valor invalido!!\n => ");
        resultado = scanf("%d", &valor);
    }
    return valor;
}

/*int max;
printf("Digite o valor maximo: \n=>");
scanf("%d", &max);
int i = 1;

while (i <= max)
{
    printf("=> %d \n", i);
    i++;
}
*/
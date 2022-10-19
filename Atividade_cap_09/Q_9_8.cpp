#include "./lista.h"
#include <stdio.h>
#include <iostream>

using namespace std;

// (9.8) Crie a função recursiva enesimo (n, L), que devolve o n-ésimo item da lista L. Por exemplo, para L apontando a
// lista [a,b,c,d],a chamada enesimo (3,L) deve devolver o item c. Para n inválido, a função deve parar com erro fatal.

int enesimo(int n, No *inicio, int atual = 1)
{

    if (inicio == NULL || n <= 0)
    {
        printf("Erro, o valor de 'n' e invalido!!\n");
        return '\0';
    }
    if (atual < n)
        return enesimo(n, inicio->prox, atual + 1);
    return inicio->item;
}

// outra maneira:
//  int enesimo(int n, Lista *l, int atual = 1)
//  {

//     if (l->inicio == NULL || n <= 0)
//     {
//         printf("Erro, o valor de 'n' e invalido!!\n");
//         return '\0';
//     }
//     if (atual < n)
//     {
//         Lista *aux = new Lista();
//         aux->inicio = l->inicio->prox;
//         return enesimo(n, aux, atual + 1);
//     }
//     return l->inicio->item;
// }

int main()
{
    Lista *lista = new Lista();

    int op = 1;

    while (op == 1)
    {
        int valor;

        printf("Digite um numero para inserir no fim da Lista: ");
        scanf("%d", &valor);
        lista->addToFinal(valor);

        printf("Deseja inserir mais um? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }

    printf("Lista inserida: \n");
    lista->mostra();

    int n, item;

    op = 1;
    while (op == 1)
    {
        printf("Digite a posicao do elemento que procuras: ");
        scanf("%d", &n);

        item = enesimo(n, lista->inicio);
        // item = enesimo(n, lista);

        if (item != '\0')
            printf("\nO item que esta na %d pos e: %d", n, item);

        printf("\nDeseja procurar mais algum elemento? (1-sim, 0-nao): ");
        scanf("%d", &op);
    }
}
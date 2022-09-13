#include <iostream>
#include <string.h>
#include "pilha_char.h"
using namespace std;

main()
{

    Pilha *p = pilha();

    char frase[50];

    cout << "Digite a frase a seguir:\n=>";
    cin >> frase;

    for (int x = 0; frase[x] != '\0'; x++)
    {
        char z[1] = {frase[x]};
        empilhar(z, p);
    }

    imprimir_sem_quebra_de_linha(p->topo);
}
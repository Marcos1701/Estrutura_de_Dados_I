#include <iostream>
#include "pilha_char.h"
using namespace std;

void exibir_opcoes()
{
    cout << "\nSelecione uma opcao: " << endl;
    cout << "1 - Empilhar" << endl
         << "2 - Desempilhar" << endl;
    cout << "3 - Imprimir" << endl
         << "0 - Sair e destruir a pilha\n"
         << endl;
}

main()
{
    int op;
    Pilha *p = pilha();

    void exibir_opicoes();
    exibir_opcoes();
    cout << "=> ";
    cin >> op;

    while (op != 0)
    {
        char z[50];
        if (op == 1)
        {
            cout << "Digite uma palavra a seguir\n=> ";
            cin >> z;
            empilha(z, p);
        }
        else if (op == 2)
        {
            desempilha(p);
        }
        else if (op == 3)
        {
            imprimir(p->topo);
        }
        else
        {
            cout << "Opcao invalida!!" << endl;
        }

        cout << "certo, agora selecione outra opcao: " << endl;
        exibir_opcoes();
        cout << "=> ";
        cin >> op;
    }
    destroi(p);
    cout << "Certo, entao ate mais..";
}

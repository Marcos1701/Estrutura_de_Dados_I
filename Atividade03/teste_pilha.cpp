#include <iostream>
#include "pilha_int.h"
using namespace std;

void exibir_opcoes()
{
    cout << "Selecione uma opcao: " << endl;
    cout << "1 - Empilhar" << endl
         << "2 - Desempilhar" << endl;
    cout << "3 - Imprimir" << endl
         << "0 - Sair" << endl
         << endl;
}

main()
{
    Pilha *p = pilha();
    int op;

    void exibir_opicoes();
    exibir_opcoes();
    cout << "=> ";
    cin >> op;

    while (op != 0)
    {
        int z;
        if (op == 1)
        {
            cout << "Digite um valor a seguir\n=> ";
            cin >> z;
            empilha(z, p);
        }
        else if (op == 2)
        {
            desempilha(p);
        }
        else if (op == 3)
        {
            imprimir_com_quebra_de_linha(p);
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
    cout << "Certo, entao tchau tchau..";
}

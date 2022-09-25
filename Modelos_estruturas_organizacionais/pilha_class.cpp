#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
    char nome;
    No *prox;
    No(char n)
    {
        nome = n;
        prox = NULL;
    }
};

class Pilha
{
public:
    No *topo;

    Pilha()
    {
        topo = NULL;
    }

    void push(char n)
    {
        No *no = new No(n);

        if (topo == NULL)
        {
            topo = no;
        }
        else
        {
            no->prox = topo;
            topo = no;
        }
        cout << "\nO caractere: " << n << " foi empilhado" << endl
             << endl;
        return;
    }

    char pop()
    {
        char aux = ' ';
        if (topo == NULL)
        {
            cout << "Pilha vazia!!!" << endl
                 << endl;
        }
        else
        {
            aux = topo->nome;
            topo = topo->prox;
        }
        return aux;
    }

    int isEmpty()
    {
        return topo == NULL;
    }
};

int msg()
{
    cout << "1 - empilha" << endl
         << "2 - desempilha" << endl
         << "0 - sair" << endl
         << "=> ";
    int x;
    cin >> x;
    return x;
}

int main()
{

    cout << "Teste pilha class..." << endl;

    Pilha *p = new Pilha();
    int op = msg();
    char aux;

    // p->push('a');
    // p->push('b');
    // p->push('c');
    // cout << "D: " << p->pop();
    // cout << "D: " << p->pop();
    // cout << "D: " << p->pop();
    // cout << "D: " << p->pop();

    while (op != 0)
    {
        // int x;
        if (op == 1)
        {
            cout << endl
                 << "emp => ";
            cin >> aux;
            p->push(aux);
        }
        else if (op == 2)
        {
            aux = p->pop();
            if (aux != ' ')
                cout << "char desempilhado: " << aux << endl
                     << endl;
        }
        op = msg();
    }
    cout << "Bay Bay..." << endl;
}
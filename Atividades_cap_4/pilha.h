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
    // insere novos elementos ao fim da pilha
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
    // retira o ultimo elemento da pilha, caso ela não esteja vazia..
    {
        char aux;
        if (topo == NULL)
        {
            cout << "Pilha vazia!!!" << endl
                 << endl;
            aux = '\0';
        }
        else
        {
            aux = topo->nome;
            topo = topo->prox;
        }
        return aux;
    }

    int isEmpty() // confere se a pilha está vazia
    {
        return topo == NULL;
    }
};
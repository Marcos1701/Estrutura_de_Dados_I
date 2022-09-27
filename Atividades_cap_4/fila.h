#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
    int num;
    No *prox;
    No(int n)
    {
        num = n;
        prox = NULL;
    }
};

class Fila
{
public:
    No *inicio;
    No *fim;

    Fila()
    {
        inicio = NULL;
        fim = NULL;
    }

    void push(int n) // Insere elementos no fim da fila
    {
        No *no = new No(n);

        if (inicio == NULL)
        {
            inicio = no;
            fim = inicio;
        }
        else
        {
            fim->prox = no;
            fim = no;
        }
        cout << "\nO caractere: " << n << " foi empilhado" << endl
             << endl;
        return;
    }

    char pop()
    // retira o primeiro elemento da fila, caso ela não esteja vazia..
    {
        int aux;
        No *aux_2 = NULL;
        if (inicio == NULL)
        {
            cout << "Fila vazia!!!" << endl
                 << endl;
            aux = '\0';
        }
        else
        {
            aux_2 = inicio;
            aux = inicio->num;
            inicio = inicio->prox;
        }
        free(aux_2);
        return aux;
    }

    int isEmpty() // confere se a fila está vazia
    {
        return inicio == NULL;
    }
};
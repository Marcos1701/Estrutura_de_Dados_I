#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
    char caractere;
    No *prox;
    No(char n)
    {
        caractere = n;
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

    void push(char n) // Insere elementos no fim da fila
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
        cout << "\nO caractere: " << n << " foi emfileirado" << endl
             << endl;
        return;
    }

    char pop()
    // retira o primeiro elemento da fila, caso ela não esteja vazia..
    {
        char aux;
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
            aux = inicio->caractere;
            inicio = inicio->prox;
        }
        free(aux_2);
        return aux;
    }

    char isEmpty() // confere se a fila está vazia
    {
        return inicio == NULL;
    }

    void exibir()
    {
        No *aux = inicio;

        if (!isEmpty())
        {
            while (aux)
            {
                cout << "=> " << aux->caractere
                     << endl;
                inicio = inicio->prox;
                aux = inicio;
            }
        }
        return;
    }
};

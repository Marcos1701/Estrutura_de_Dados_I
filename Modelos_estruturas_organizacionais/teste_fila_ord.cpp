#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No
{
public:
    int valor;
    No *prox;
    No(int n)
    {
        valor = n;
        prox = NULL;
    }
};

class Fila
{
public:
    No *inicio;
    No *fim;
    int tamanho;

    Fila()
    {
        inicio = NULL;
        fim = NULL;
        tamanho = 0;
    }

    void push(int n) // Insere elementos no fim da fila
    {
        No *no = new No(n);

        if (isEmpty())
        {
            inicio = no;
            fim = inicio;
        }
        else
        {
            fim->prox = no;
            fim = no;
        }
        tamanho++;
        cout << "\nO valor: " << n << " foi empilhado" << endl
             << endl;
        return;
    }

    char pop()
    // Confere se a fila está vazia, caso não esteja, retira o primeiro elemento...
    {
        int aux;
        No *aux_2 = NULL;
        if (isEmpty())
        {
            cout << "Fila vazia!!!" << endl
                 << endl;
            aux = '\0';
        }
        else
        {
            aux_2 = inicio;
            aux = inicio->valor;
            inicio = inicio->prox;
            tamanho--;
        }
        free(aux_2);
        return aux;
    }

    int isEmpty() // confere se a pilha está vazia
    {
        return inicio == NULL;
    }

    void ordena_cescente() // apenas um teste..
    {
        No *aux = inicio;
        int x, y = tamanho;

        for (int i = 0; i < y; i++)
        {
            while (aux->prox)
            {
                if (aux->valor > aux->prox->valor)
                {
                    x = aux->valor;
                    aux->valor = aux->prox->valor;
                    aux->prox->valor = x;
                }
                aux = aux->prox;
            }
            // y--;
        }

        return;
    }

    void exibir_lista()
    {
        No *n = inicio;
        if (inicio)
        {
            while (n)
            {
                cout << "Valor: " << n->valor << endl;
                n = n->prox;
            }
        }
        return;
    }
};

int msg() // exibe o menu e recebe a opção desejada...
{
    cout << "1 - empilha" << endl
         << "2 - desempilha" << endl
         << "3 - exibir" << endl
         << "0 - sair" << endl
         << "=> ";
    int x;
    cin >> x;
    return x;
}

int main()
{

    cout << "Teste fila ordenada class..." << endl;

    Fila *p = new Fila();
    int op = msg();
    int aux;

    while (op != 0)
    // menu de teste
    {
        if (op == 1)
        {
            cout << endl
                 << "emp => ";
            cin >> aux;
            p->push(aux);
            p->ordena_cescente();
        }
        else if (op == 2)
        {
            aux = p->pop();
            if (aux)
                cout << "numero desempilhado: " << aux << endl
                     << endl;
        }
        else if (op == 3)
        {
            p->exibir_lista();
        }
        else
        {
            cout << "Opção inválida!!!" << endl;
        }
        op = msg();
    }
    cout << "Bay Bay..." << endl;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No
{
public:
    int mat;
    char nome[23];
    No *prox;
    No(int m, char n[23])
    {
        mat = m;
        strcpy(nome, n);
        prox = NULL;
    }
};

class Lista
{
public:
    No *inicio;
    No *fim;

    Lista()
    {
        inicio = NULL;
        fim = NULL;
    }
    void addToFinal(int m, char n[23])
    {
        No *novo = new No(m, n);
        if (fim == NULL)
        {
            inicio = novo;
            fim = novo;
        }
        else
        {
            fim->prox = novo;
            fim = novo;
        }
    }

    int lst_vazia()
    {
        return (inicio == NULL);
    }

    void addToInicio(int m, char n[23])
    {

        No *novo = new No(m, n);
        if (inicio == NULL)
        {
            inicio = novo;
        }
        else
        {
            novo->prox = inicio;
            inicio = novo;
        }
        return;
    }

    void mostra()
    {
        cout << endl
             << "-------- Mostra --------" << endl;

        if (lst_vazia())
        {
            cout << "\nLista vazia!!!";
        }
        else
        {
            No *aux = inicio;
            for (int i = 0; aux != NULL; aux = aux->prox)
            {
                cout << endl
                     << "Mat: " << aux->mat << endl
                     << "Nome : " << aux->nome << endl;
                i++;
            }
            cout << endl;
        }
    }

    int remove(int mat)
    {

        No *aluno = busca(mat);

        if (aluno == NULL)
        {
            cout << "Matricula nao encontrada, aluno inexistente!!!" << endl;
            return 1;
        }
        No *aux = aluno->prox;

        aluno->prox = aux->prox;
        free(aux);
        cout << "Aluno removido com sucesso" << endl;
        return 0;
    }

    // auxiliar no metodo remove, vai
    // retornar o endereco do anterior
    No *busca(int mat)
    {
        if (lst_vazia())
        {
            cout << "\nErro, Lista vazia!!!";
        }
        else
        {
            No *aux = inicio;

            do
            {
                if (aux->mat == mat)
                {
                    break;
                }
                aux = aux->prox;
            } while (aux != NULL);

            return aux;
        }
    }

    void removeTodos()
    {
        No *atual = inicio;
        No *proximo = NULL;
        while (atual != NULL)
        {
            proximo = atual->prox;
            cout << "\n Apaga: " << atual->nome;
            free(atual);
            atual = proximo;
        }
        inicio = atual;
    }

    // criar uma nova lista que seja o inverso da primeira
    Lista *crialistainversa()
    {

        Lista *lista = new Lista();
        No *aux = inicio;

        while (aux != NULL)
        {
            lista->addToInicio(aux->mat, aux->nome);
            aux = aux->prox;
        }
        return lista;
    }
    
    

    // inverter a propria lista
    void listainvertida()
    {
        No *aux = inicio;
        Lista *f = crialistainversa();
        inicio = f->inicio;

        free(f);
        return;
    }

    void anexa(Lista *Anexada, Lista Recebe){
        if(Recebe.inicio == NULL) return;
         
         Anexada->fim->prox = Recebe.inicio;
         Anexada->fim = Recebe.fim;
         return;
    }

    int destroi(){
        No *aux = inicio;
        if(aux == NULL) return 0;

        while(aux != NULL){
            No *x = aux;
            aux = x->prox;
            free(x);
        }
        return 1;
    }
    
};

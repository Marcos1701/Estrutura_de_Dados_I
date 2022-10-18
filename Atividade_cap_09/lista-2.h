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

    int lst_vazia()
    {
        return (inicio == NULL);
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

    // void add(int m, char n[23])
    // {

    //     No *novo = new No(m, n);
    //     if (inicio == NULL)
    //     {
    //         inicio = novo;
    //     }
    //     else
    //     {
    //         organiza(novo);
    //     }
    //     return;
    // }

    // void organiza(No *aluno){
        
    //     No *aux = inicio;

    //     while(aux != NULL){
    //         if(aux->mat <= aluno->mat){
    //             aluno->prox = aux->prox;
    //             aux->prox = aluno;
    //             return;
    //         }
    //     }
  
    //     fim->prox = aluno;
    //     return;
    // }

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
            return 0;
        }
        
        if(aluno->mat == inicio->mat){
          inicio = inicio->prox;
          free(aluno);
          return 1;
        }
        No *aux = inicio;
        while(aux->prox->mat != aluno->mat){ aux = aux->prox;}
        aux->prox = aluno->prox;
        free(aluno);
        cout << "Aluno removido com sucesso" << endl;
        return 1;
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
        lista->inicio = inicio;
        lista->fim = fim;

        lista->listainvertida();
         
        return lista;
    }
    

    // inverter a propria lista
    
    void listainvertida()
    {
        No *atual = inicio, *anterior = atual->prox, *proximo = NULL;
        atual->prox = NULL;
        fim = atual;

        while (anterior != NULL)
        {
            proximo = anterior->prox;
            anterior->prox = atual;
            atual = anterior;
            anterior = proximo;
        }
        inicio = atual;

        return;
    }
    
};
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No
{
public:
	int mat;
	string nome;
	No *prox;
	No *ant;
	No(int m, string n)
	{
		mat = m;
		nome = n;
		prox = NULL;
		ant = NULL;
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
	void addToFinal(int m, string n)
	{

		No *novo = new No(m, n);

		if (inicio == NULL)
		{
			inicio = novo;
			fim = novo;
		}
		else
		{
			fim->prox = novo;
			novo->ant = fim;
			fim = novo;
		}
	}

	void addToIni(int m, string n)
	{
		No *novo = new No(m, n);
		if (inicio == NULL)
		{
			inicio = novo;
			fim = novo;
		}
		else
		{
			novo->prox = inicio;
			inicio->ant = novo;
			inicio = novo;
		}
	}

	/* add elemento de maneira ordenada na lista */
	void addOrd(int m, string n)
	{
		No *novo = new No(m, n);

		if (inicio == NULL || inicio->mat > m)
			addToIni(m, n);
		else
		{
			No *aux = inicio;

			while (aux->prox && aux->prox->mat < m)
			{
				cout << aux->mat << endl;
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			if (aux->prox)
				aux->prox->ant = novo;
			novo->ant = aux;
			aux->prox = novo;

			if (aux == fim)
				fim = novo;
		}
	}

	// mostra todos os elementos do inicio ao final da lista
	void mostraIniFim()
	{
		cout << "----- Mostra Lista (INICIO -> FIM) -----\n"
			 << endl;
		if (inicio)
		{
			No *aux = inicio;
			while (aux)
			{
				cout << "Mat: " << aux->mat << endl
					 << "Nome : " << aux->nome << endl;
				aux = aux->prox;
			}
			cout << endl;
		}
		else
			cout << "Lista Vazia!!" << endl;
	}

	// mostra todos os elementos do final ao inicio da lista
	void mostraFimIni()
	{
		cout << "----- Mostra Lista (FIM -> INICIO) -----\n"
			 << endl;
		if (inicio)
		{
			No *aux = fim;
			while (aux)
			{
				cout << endl
					 << "Mat: " << aux->mat << endl
					 << "Nome : " << aux->nome << endl;
				aux = aux->ant;
			}
			cout << endl;
		}
		else
			cout << "Lista Vazia!!" << endl;
	}

	int removerFinal()
	{
		int deu_certo = 0;
		if (inicio)
		{
			deu_certo = 1;
			No *aux = fim;
			fim = fim->ant;
			free(aux);
		}
		else
			cout << "Lista Vazia!!" << endl
				 << endl;
		return deu_certo;
	}

	int removerInicio()
	{
		int deu_certo = 0;
		if (inicio)
		{
			deu_certo = 1;
			No *aux = inicio;
			inicio = inicio->prox;
			free(aux);
		}
		else
			cout << "Lista Vazia!!" << endl
				 << endl;
		return deu_certo;
	}

	int remover(int m)
	{
		No *aux = inicio;
		int achou = 0;
		if (inicio)
		{
			if (inicio->mat == m)
			{
				inicio = inicio->prox;
				free(aux);
				achou = 1;
			}
			else
			{
				while (aux && aux->mat != m)
				{
					aux = aux->prox;
				}
				if (aux && aux->mat == m)
				{
					// cout << "Valor removido: " << aux->mat << endl;
					achou = 1;
					aux->ant->prox = aux->prox;
					aux->prox->ant = aux->ant;
					if (aux == fim)
						fim = aux->ant;
					free(aux);
				}
			}
			// if (!aux)
			// {
			// 	cout << "Matricula nao encontrada!!" << endl;
			// }
		}
		return achou;
	}
};

main()
{
	Lista *l = new Lista();

	l->addOrd(1, "Joana Oliveira");
	l->addOrd(10, "Cristiano Oliveira");
	// l->mostra();
	l->addOrd(8, "Joao");
	l->addOrd(4, "Fabio");
	// l->mostraIniFim();
	l->mostraFimIni();
	// if (l->remover(4))
	if (l->remover(3))
	{
		cout << "Elemento removido!!\n"
			 << endl;
	}
	else
	{
		cout << "Elemento nao encontrado!!\n"
			 << endl;
	}

	l->mostraIniFim();
}

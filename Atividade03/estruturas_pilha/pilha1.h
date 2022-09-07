#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
	int max;
	int topo;
	char *item;

} Pilha;

Pilha *pilha(int m)
{
	Pilha *p = (Pilha *)malloc(sizeof(Pilha));
	p->max = m;
	p->topo = -1;
	p->item = (char *)malloc(m * sizeof(char));
	return p;
}

int Vaziap(Pilha *p)
{
	if (p->topo == -1)
		return 1;
	else
		return 0;
}

int pilhaCheia(Pilha *p)
{
	if (p->topo == p->max)
		return 1;
	else
		return 0;
}

void empilhar(char n, Pilha *p)
{

	if (p->topo == p->max)
	{
		puts("Pilha cheia");
		abort();
	}

	p->topo++;
	p->item[p->topo] = n;
}

char desempilha(Pilha *p)
{
	if (Vaziap(p))
	{
		puts("Pilha vazia");
		abort();
	}
	p->topo--;
	return p->item[p->topo + 1];
}

void destroi(Pilha *p)
{
	free((p)->item);
	free(p);
	p = NULL;
}

char getTopo(Pilha *p)
{
	if (Vaziap(p))
	{
		puts("Pilha vazia, insira elementos!!!");
		abort();
	}
	else
		return (p->item[p->topo]);
}

#include <stdio.h>
#include <stdlib.h>

int max = 50;
char item[50];
int topo = -1;

void push(char n)
{
	if (topo < max)
		item[++topo] = n;
}

char pop()
{
	char x;
	if (topo >= 0)
	{
		x = item[topo];
		topo--;
		return x;
	}
	else
	{
		printf("Pilha vazia!!");
	}
}

int pilhaVazia()
{
	if (topo < 0)
		return 1;
	else
		return 0;
}

int pilhaCheia()
{
	if (topo < max)
		return 1;
	else
		return 0;
}

char getTopo()
{
	return item[topo];
}

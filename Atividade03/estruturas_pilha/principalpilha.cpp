#include <iostream>
#include "pilha1.h"
using namespace std;

int main()
{
	Pilha *p1 = pilha(5);

	p1->item = {"ab"};
	p1->topo = 1;
	cout << "valor topo da pilha  :" << p1->item[1] << endl;
	cout << "indice topo da pilha :" << p1->topo;
	push('c', p1);
	char x = getTopo(p1);

	cout << "valor topo da pilha agora é  :" << x << endl;
}

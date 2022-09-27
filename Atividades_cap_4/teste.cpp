//palindroma.c - verifica se uma cadeia e palindroma
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include "pilha.h" // pilha de char
#include "fila_char.h" // fila de char

using namespace std;

int main ( void ) {
  string  s;
  char x,y;
  Fila *F = new Fila();
  Pilha *P = new Pilha();
  cout << "\nFrase ? ";
  cin >> s;
  for (int i = 0;s[i];i++)
    if (isalpha(s[i])){
      F->push(s[i]);
      P->push(s[i]);
    }

   x = F->pop();
   y = P->pop();
  while ((!F->isEmpty()) && (x == y)){
    if ( F->isEmpty()) cout << " A frase e palindroma " << endl;
    else cout << " A frase nao e palindroma " << endl;
    
    x = F->pop();
    y = P->pop();
  }
  return 0;
}

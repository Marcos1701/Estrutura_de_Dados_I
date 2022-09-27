#include <stdio.h>
#include "fila.h" // fila de char

int main(void){
  
  Fila *F = new Fila;
  for(int i = 0; i <= 3; i++) F->push('A' + i);
  while( !F->isEmpty() ) printf("%c\n", F->pop());
  return 0;
}
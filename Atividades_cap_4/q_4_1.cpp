#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "fila.h"
 
int main(){
 Fila *F = new Fila();
 F->push(1);
 F->push(2);
 F->push(3);
 F->push(F->pop());
 F->push(F->pop());
 printf("%d\n", F->pop());
 return 0;
}
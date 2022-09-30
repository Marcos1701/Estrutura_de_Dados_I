#include <stdio.h>
#include "fila_int.h" // fila de int
#define tempo 3       // tempo maximo de uso de CPU
int main(void)
{
    Fila *F = new Fila();
    F->push(17);
    F->push(25);
    F->push(39);
    F->push(46);
    while (!F->isEmpty())
    {
        int x = F->pop();
        int p = x / 10;
        int t = x % 10;
        if (t > 3)
            F->push(p * 10 + (t - tempo));
        else
            printf("Processo %d concluido\n", p);
    }
    return 0;
}

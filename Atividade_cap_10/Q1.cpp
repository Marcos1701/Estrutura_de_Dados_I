#include <stdio.h>
#include "./lstord.h"

int main(void)
{

    Lista *L = new Lista();
    L->ins(2);
    L->ins(5);
    L->ins(1);
    L->ins(4);
    L->ins(3);

    printf("Sequencia em ordem crescente: ");
    L->mostra();
    puts("");
    return 0;
}
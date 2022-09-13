#include <stdio.h>
#include "pilha_char.h" // pilha de char *

int main(void)
{
   Pilha *P = pilha();
   char s[11];
   for (int i = 1; i <= 3; i++)
   {
      printf("? ");
      gets(s);
      empilhar(strdub(s), P);
   }
   while (!vaziap(P))
      puts(desempilha_com_retorno(P));
   return 0;
}

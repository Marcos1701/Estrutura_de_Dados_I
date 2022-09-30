# Atividade Cap.4

**4.1 Simule a execução do código a seguir e indique a saída exibida em vídeo:**
```
 Fila F = fila(5);
 enfileira(1,F);
 enfileira(1,F);
 enfileira(1,F);
 enfileira(desenfileira(F),F);
 enfileira(desenfileira(F),F);
 printf("%d\n, desenfileira(F));
 ```
R- A saída resultante será: 
 ```
  // 1 foi empilhado
  // 2 foi empilhado
  // 3 foi empilhado
  // 1 foi empilhado
  // 2 foi empilhado
  // 3
  ```
  **4.2 Qual será a saída exibida pelo programa a seguir?**
  ```
  #include <stdio.h>
  #include "../ed/fila.h" // fila de char
  
  int main(void){
    
    Fila F = fila(5);
    for(int i = 0; i <= 3; i++) enfileira('A' + i, F);
    while( !vaziaf(F) ) printf("%c\n, desenfileira(F));
    destroif(&F);
    return 0;
  }
  ```
  Saída resultante: 
  ```
O caractere: 65 foi empilhado (isso ocorre pq usei uma fila de inteiros...)
O caractere: 66 foi empilhado
O caractere: 67 foi empilhado
O caractere: 68 foi empilhado
A
B
C
D
```

**4.3 O programa da rigura 4.4 nao reconhece "Amor a Roma" como uma cadeia palindroma. Use a fungao toupper ()                                              ,
declarada em ctype.n, para resolver esse problema (essa funcao converte uma letra minuscula em maitiscula)                                              .**

R- A resolução está no arquivo "Q_4_3.cpp".

**4.4 O programa a seguir simula o compartilhamento de uma CPU entre varios processos que aguardam numa fila 
para serem executados. Enquanto a fila não fica vazia, o primeiro processo na fila pode usar a CPU 
por certo periodo de tempo. Se nesse periodo o processo termina, ele é removido da fila; senão, ele volta para
o final dela e o próximo processo na fila passa a usar a CPU. Nessa fila, um Processo 'p' que precisa de 't' 
unidades de tempo para concluir sua execução é representado por um numero da forma p*10+t (sendo 'p' e 't' digi-
tos). Analise o programa e indique a ordem de conclusão dos processos.
 
 ```
 #include <stdio.h>
#include "../ed/fila.h" // fila de int
#define tempo 3 // tempo maximo de uso de CPU
int main(void) {
Fila F = fila(5);
enfileira(17,F);
enfileira (25,F);
enfileira(39,F);
enfileira (46,F);
while( !vaziaf(F) ) {
int x = desenfileira(F);
int p = x/10;
int t = x%10;
if( t>3 ) enfileira(p*10+(t-tempo) ,F);
else printf£("Processo %d concluido\n",p);
}
destroif (&F);
return 0;
}
```

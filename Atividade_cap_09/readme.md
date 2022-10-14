# Atividade cap 9 - Listas

*(9.1) Crie o arquivo lista.h, contendo as definições de tipos e funções para listas encadeadas
apresentadas nesse capítulo, e teste o programa a seguir.*
      
 ```
      #include <stdio.h>
      #include "../ed/lista.h" // lista de int
      int main (void) {
           Lista no (3,no (1,no (5, ,NULL)));
          exibe_inv(L);
           return 0;
      }
      
 ```
 
 
 
*(9.2) Crie a função iterativa ocorrencias (x, L), que informa quantas vezes o item X
  ocorre na lista L. Por exemplo, para L apontando a lista [1,2,1,4,1], a chamada
  ocorrencias (1,L) deve devolver 3 como resposta.*


*(9.3) Crie a função iterativa ultimo (L), que devolve o último item da lista L. Por
exemplo, para L, apontando a lista [a,b, c],a função deve devolver o item C.*


*(9.4) Crie a função iterativa inversa (I), que devolve a lista inversa de L. Por exemplo, para F apontando a lista [7,9,2], a função deve devolver [2,9,7].*


*(9.5) Crie a função recursiva soma (L), que devolve a soma dos itens da lista L. Por exemplo, para L, apontando a lista [3,1,5,4], a função deve devolver 13.*



*(9.6) Crie a função recursiva substitui (x, y, L), que substitui toda ocorrência do item x pelo item y na lista L. Por exemplo, se L aponta a lista [b,o,b, o], após a chamada substitui ('o', 'a', L),L deverá apontar a lista [b, a,b,a].*


*(9.7) Crie a função recursiva igual(A,B), que verifica se a lista A é igual à lista B. Por exemplo, se I aponta [1,2,3], J aponta [1,2,3] e K aponta [1,3,2], as chamadas igual(I,J) e igual (I,K) devem devolver 1 e 0, respectivamente.*

*(9.8) Crie a função recursiva enesimo (n, L), que devolve o n-ésimo item da lista L. Por exemplo, para L apontando a lista [a,b,c,d], a chamada enesimo (3,L) deve devolver o item c. Para n inválido, a função deve parar com erro fatal.* 


*(9.9) Na implementação dinâmica encadeada de pilha, os itens são mantidos numa lista (com um ponteiro P para seu início) e as inserções e remoções são feitas no início dessa lista. Crie as funções empilha (x,&P) e desempilha (&P), para pilhas dinâmicas encadea das, e faça um programa para testá-las.*


*(9.10) Na implementação dinâmica encadeada de fila, os itens são mantidos numa lista circular (com um ponteiro F para o último nó inserido na lista, que aponta o primeiro), as inserções são feitas no final da lista e as remoções são feitas no início da lista. Crie as funções enfileira (x,&F) e desenfileira (&F), para filas dinâmicas encadeadas, e faça um programa para testá-las.*

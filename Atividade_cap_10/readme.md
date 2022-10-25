# Exercicio cap 10

**(10.1) Crie o arquivo lstord.h, que estende o arquivo lista.h com as funções para listas
ordenadas definidas nesse capitulo, e teste o programa a seguir.**

```
#include <stdio.h>
#include "../ed/lstord.h"

int main(void)
{

    Lista L = NULL;
    ins(2, &L);
    ins(5, &L);
    ins(1, &L);
    ins(4, &L);
    ins(3, &L);
    
    printf("Sequencia em ordem crescente: ");
    exibe(L);
    puts("");
    return 0;
}

```

R-

(10.2) Usando o tipo Lista, faça um programa para ler uma sequencia aleatoria de n inteiros e
exibir a sequência correspondente em ordem decrescente.

R-

```
   //A resposta está no arquivo Q2.cpp
```

**(10.3) A funçao para inserção em lista ordenada, definida na Figura 10.2, permite a criaçao de
listas ordenadas com itens repetidos. Com base nessa função, crie a função insSR(x,L),
que insere o item x em L só se x nao estiver em L.**

R-

```
//A resposta está no arquivo Q3.cpp
```

**(10.4) Um conjunto é uma coleção de elementos distintos. Embora a ordem dos elementos num
conjunto seja irrelevante, conjuntos podem ser representados por listas ordenadas (sem
itens repetidos). Dadas duas listas ordenadas representando dois conjuntos A e B, crie a
função:**

*(a) uniao(A,B), que devolve uma lista ordenada representando o conjunto de todos os
itens que esto no conjunto A ou no conjunto 8.*

*(b) interseccao(A,B), que devolve uma lista ordenada representando o conjunto de
todos os itens que estão no conjunto A e no conjunto B.*

*(c) diferenca(A, B), que devolve uma lista ordenada representando o conjunto de todos
os itens que estão no conjunto A, mas não no conjunto B.*

*(d) subconjunto(A,B), que informa se todo elemento do conjunto A é também um ele-
mento do conjunto B.*

R- 

```
//A resposta está no arquivo Q4.cpp
```


**(10.5) Em C, cadeias não podem ser atribuídas pelo operador de atribuicão (=), nem comparadas
pelos operadores relacionais (==, !=, <, <=, > e >=). Então, as funções para listas ordena-
das definidas nesse capitulo não podem ser usadas com listas de cadeias. Usando as funções
strcpy() e strcmp(), declaradas em string.h, crie novas versdes das funções no(),
ins(),rem(),em() e exibe(), que possam ser usadas com listas ordenadas de cadeias.**

R- 

```
//A resposta está no arquivo Q5.cpp
```

(10.6) A função recursiva exibep(), definida na Figura 10.11, exibe o polinômio P(x) = 4x^3 — 2x
como +4.0*x^3-2.0*x^1. Crie uma versão iterativa dessa função, que não mostra o ex-
poente 1, isto é que exibe +4.0*x^3-2.0*x.

R- 


```
//A resposta está no arquivo Q6.cpp
```

(10.7) Usando a função adt(), definida na Figura 10.12, crie a função soma(P, Q), que devolve
o polinômio correspondente à soma dos polinômios Q e P.

R- 


```
//A resposta está no arquivo Q7.cpp
```

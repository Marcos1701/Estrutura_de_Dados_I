# --------__... Atividade ...__--------

**2.1 Qual a saída exibida pelo programa a seguir ? Por quê ?**

```
#include  < stdio.h >
#include "../ed/pilha.h " // pilha de int 

int main (void) {
    Pilha P = pilha(3);
    empilha(1, P);
    empilha(2, P);
    printf("%d \n", desempilha(P));
    printf("%d \n", desempilha(P));
    printf("%d \n ", desempilha ( P ));
    return 0;
}
```

R- A saída resultante será primeiramente "2", depois exibirá "1" e                                                                                               
R- em seguida exibirá "pilha vazia", isso acontece, pois todos os valores                                             
R- inseridos na pilha já haviam sido desempilhados, dessa forma deixando-a                                        
R- vazia                                                                  .

**2.2 Qual a saída exibida pelo programa a seguir ? Por quê ?**

```
#include < stdio.h >
#include " ../ed/pilha.h" // pilha de float
int main(void) {

Pilha P = pilha (100);
empilha (8, P);
while (topo(P) > 0) empilha (topo (P) / 2, P);
while (!vaziap (P)) printf ("%f \n", desempilha (P));
return 0;

}
```


R- a saída será:
  ```
 //0
 //2
 //4
 //8
```                                                             
R- Esse programa inicialmente cria uma pilha e em seguida empilha o valor 8, na mesma,                                                             
R- logo depois, enquanto o topo da pilha for maior que zero, ele empilha o valor do topo                    
R- dividido por dois, depois, enquanto a pilha não for vazia, ele desempilha os valores                      
R- adicionados                                                                          .

**2.3 Usando pilha , crie um programa para inverter a ordem das letras nas palavras de uma frase
digitada pelo usuário. Por exemplo, se for digitada a frase "apenas um teste", o programa deverá
exibir a frase " sanepa mu etset ".**

R- 
  ```
#include <iostream>
#include <string.h>
#include "pilha_char.h"
using namespace std;

main()
{

    Pilha *p = pilha();

    char frase[50];

    cout << "Digite a frase a seguir:\n=>";
    cin >> frase;

    for (int x = 0; frase[x] != '\0'; x++)
    {
        char z[1] = {frase[x]};
        empilhar(z, p); // sem o retorno do valor empilhado...
    }

    imprimir_sem_quebra_de_linha(p->topo);
}

```


**2.4 Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números reais dados
pelo usuário . A ideia é organizar a pilha A de modo que nenhum item seja empilhado sobre outro menor 
(use a pilha B apenas como espaço de manobra), depois, descarregue e exiba os itens da pilha A.**

R-                                                                                   
R-

**2.5 Usando pilha, crie uma função para verificar se uma expressão composta apenas por chaves,
colchetes e parênteses, representada por uma cadeia, está ou não balanceada . Por exemplo, as
expressões "[ { ( ) ( ) } { } ]" e "{ [ ( [ { } ] ) ] }" estão balanceadas, mas as expressões
"{ [ ( } ] )" e "{ [ ) ( ) ( ] }" não são.**

R-                                                                             
R-

**2.6 Supondo que o usuário digite as cadeias "um", "dois" e "tres", qual será a saída exibida
pelo programa a seguir? Por quê?**

```
#include <stdio.h>
#include "../ed/pilha.h" // pilha de char *

int main(void){
   Pilha P = pilha(5);
   char s[11];
   for (int i = 1; i <= 3; i++) { printf("? "); gets (s); empilhar(s, P); }
   while (!vaziap (P) ) puts (desempilha(P));
   return 0;
}
```
R-                                                                                   
R-

**2.7 Usando a função '_strdup (s)', declarada em 'string.h', corrija o programa do exercício anterior.
Essa função cofia a cadeia 's' para uma área da memória, alocada dinamicamente pela função 'malloc()',
e devolve o endereço dessa área. Depois de usada, essa cópia pode ser destruída com a função 'free()'.**

R-                                                                                              
R-

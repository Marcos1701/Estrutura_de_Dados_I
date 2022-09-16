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
        empilhar(z, p); // desativando o retorno do valor empilhado para melhor observação...
    }

    imprimir_sem_quebra_de_linha(p->topo);
}

```


**2.4 Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números reais dados
pelo usuário . A ideia é organizar a pilha A de modo que nenhum item seja empilhado sobre outro menor 
(use a pilha B apenas como espaço de manobra), depois, descarregue e exiba os itens da pilha A.**

R-                                                                                   
 ```
 #include <iostream>
#include "pilha_int_vetor.h"
#include <stdbool.h>
using namespace std;

void organizar_pilha(int valor, Pilha *C, Pilha *D)
{
    int k = C->tamanho - 1, aux, x = 0;
    cout << "k: " << k << endl;
    if (k == -1)
    {
        empilha(valor, C);
        return;
    }

    for (int i = k; i >= 0; i--)
    {
        aux = desempilha_com_retorno(C);
        while (aux < valor)
        {
            empilha(aux, D);
            if (C->topo != -1)
                aux = desempilha_com_retorno(C);
            else
                break;
            x = 1;
        }

        if (x)
        {
            empilha(valor, C);
            while (D->topo > -1)
            {
                empilha(desempilha_com_retorno(D), C);
            }
        }
        else
        {
            empilha(aux, C);
            empilha(valor, C);

            return;
        }
    }
    return;
}

main()
{

    int x;

    cout << "Digite a qtd de valores que seram inseridos em A: ";
    cin >> x;
    cout << "tamanho : " << x << endl;
    Pilha *A = pilha(x);
    Pilha *B = pilha(x);

    while (x != 0)
    {
        int z;
        cout << "Digite um valor a seguir\n=> ";
        cin >> z;
        organizar_pilha(z, A, B);
        cout << "tam: " << A->tamanho << endl;
        x--;
    }

    imprimir_com_quebra_de_linha(A);
}
```

**2.5 Usando pilha, crie uma função para verificar se uma expressão composta apenas por chaves,
colchetes e parênteses, representada por uma cadeia, está ou não balanceada . Por exemplo, as
expressões "[ { ( ) ( ) } { } ]" e "{ [ ( [ { } ] ) ] }" estão balanceadas, mas as expressões
"{ [ ( } ] )" e "{ [ ) ( ) ( ] }" não são.**

R-                                                                             
  ```
 #include "pilha_caracter_vetor.h"
#include <stdio.h>
#include <string.h>

int conferir_expressao(char x[])
{

    int k = strlen(x);
    Pilha *aux = pilha(k);

    for (int i = 0; i <= k; i++)
    {
        char z = x[i];

        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            empilhar(x[i], aux);
            printf("v : %c\n", x[i]);
        }
        else if (x[i] == ')' || x[i] == ']' || x[i] == '{')
        {
            if (vaziap(aux))
            {
                destroi(aux);
                return 0;
            }
            z = desempilha_com_retorno(aux);

            if ((x[i] == ')' && z != '(') || (x[i] == ']' && z != '[') || (x[i] == '{' && z != '}'))
            {
                return 0;
            }
            printf("v2 : %c\n", x[i]);
        }
        // k++;
    }
    return 1;
}

int main()
{

    char expressao[50];
    printf("Digite a expressao a seguir :\n=> ");
    scanf("%s", expressao);

    if (conferir_expressao(expressao))
        printf("Expressao balanceada\n");
    else
        printf("Expressao nao balanceada\n");

    return 0;
}
```

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
R- Isso ocorre por conta do for que a cada 'passada' sobrescreve 's' com o valor 
R- obtido com a função 'gets' e dessa forma resultando na saída a seguir :                                                                                 
  ```
  // tres
  //tres
  //tres
  ```

**2.7 Usando a função '_strdup (s)', declarada em 'string.h', corrija o programa do exercício anterior.
Essa função cofia a cadeia 's' para uma área da memória, alocada dinamicamente pela função 'malloc( )',
e devolve o endereço dessa área. Depois de usada, essa cópia pode ser destruída com a função 'free( )'.**

R-                                                                                              
 ```
#include <stdio.h>
#include <string.h>
#include "pilha_char.h" // pilha de char *

using namespace std;

main()
{
    Pilha *P = pilha();
    char s[5];
    for (int i = 1; i <= 3; i++)
    {
        printf("? ");
        gets(s);
        empilhar(strdup(s), P);
    }
    while (!vaziap(P))
    {
        desempilha_e_imprime_sem_quebra_de_linha(P);
    }
}
  ```

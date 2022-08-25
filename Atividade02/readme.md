# --------__... Atividade ...__--------

**1.1) Analise a estrura de dados esquematizada a seguir:**

### (a) --> (b) --> (c) <-- (d) --> (e) --> (f)

*Explique por que essa estrutura:*

**(a) Não é um conjunto                             .**

R- pois os valores seguem uma ordem.

**(b) Não é uma lista                       .**

R- pois um dos itens (o item c) possui mais de um predecessor.

**(c) Não é uma árvore                       .**

R- pois um dos itens (o item c) possui mais de um predecessor.

**1.2) Indique a estrutura de dados mais adequada para ser usada num programa que precisa representar:**

**(a) Estradas entre cidades de um mapa                        .**

R- Grafo

**(b) A estrutura organizacional de uma empresa                            .**

R- Árvore

**(c) A fila de impressão em um sistema operacional                              .**

R- Lista

**(d) A estrutura de diretórios em um sistema operacional                         .**

R- Conjunto

**1.3) Ao ser executado,o programa a seguir exibe a palavra diferentes. Explique por que isso acontece.**

```
#include<stdio.h>

int main(void){
    char s[3] = "um";
    char t[3] = "um";
    
    if(s == t)puts("iguais");
    else puts("diferentes");
    
    return 0;
}

```

R- Isso ocorre por causa do if, em c, comparar os endereços de memoria dos vetores (ou valores do tipo char) e não o seu conteúdo em si.

**1.4) Explique o que acontece quando o programa a seguir é executado    .**

```
#include<stdio.h>

typedef struct { char valor[10]; } Str;

int main(void){

  Str x = {"um"};
  Str y = {"dois"};

  puts(x.valor);
  x = y;
  puts(x.valor);

  return0;
}
```

R-  Inicialmente o programa cria as variáveis x e y e exibe o valor de x, logo em seguida o valor de x é sobrescrito/atualizado pelo valor de y e por isso, ao exibi-lo novamente, o seu valor está diferente.

**1.5) Explique o que acontece quando o programa a seguir é executado          .**

```
#include<stdio.h>

int main(void){
}
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    
    printf("%d,%d\n", a, b);
    
    return 0;
}

```

R- Inicialmente o programa cria as variáveis a = 3 e b = 5 e em seguida cria dois ponteiros, p e q, que "apontam" ou são iterligados aos endereços de memoria de a e b, respectivamente, e consequentimente as alterações feitas em p e q são diretamente relacionadas as variáveis a e b, alterando os seus valores.

**1.6) Indique a forma de alocação de memória(estática sequencial, estática encadeada, dinâmica sequencial ou dinâmica encadeada) 
usada para armazenar os itens 1, 2, 3 e 4, em cada um dos programas a seguir.**

(a)
```
#include<stdio.h>
#include<stdlib.h>

int main(void){
     int i, *v = malloc(4*sizeof(int));
     
     for (i = 0; i < 4; i++) v[i] = i + 1;
     for (i = 0; i < 4; i++) printf("%d\n",v[i]);
     return 0;
}
```

R- Dinâmica sequencial.

(b)
```

#include<stdio.h>
#include<stdlib.h>

typedef struct no{

     int item;
     struct no*prox;
     
}No;

int main(void){
    Nov[4] = {{3, v + 2}, {1, v + 3}, {4, NULL}, {2, V + 0}};
    
     for (No *p = v + 1; p != NULL; p = p->prox)
       printf("%d\n",p->item);
       
return0;
}
```

R- Estática encadeada.

(c)
``` 

#include<stdio.h>
#include<stdlib.h>

typedef struct no{
  
  int item;
  struct no*prox;
  
}*Lst;

Lst no(int x, Lst p){
  Lst n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = p;
  
  return n;
}

int main(void){

  Lst p = no(1,no(2,no(3,no(4,NULL))));

  while(p){
   printf("%d\n", p->item);
   P = p->prox;
  }
return 0;
}
```

R- Dinâmica encadeada.

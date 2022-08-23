#include <stdio.h>
#include <stdlib.h>

// main(){
//   char s[3] = {"um"};
//   char t[3] = {"um"};

//   if(s == t)
//     printf("iguais\n");
//   else
//   printf("diferentes\n");
// }

//   typedef struct {char valor[10];} Str;
  
// main(){
//     Str x = { "um"};
//     Str y = {"dois"};

//     puts(x.valor);

//     x = y;

//     puts(x.valor);
// }

// main(){
//     int a = 3, b = 5;

//     int *p = &a, *q = &b;

//     *p = *p + *q;
//     *q = *p - *q;
//     *p = *p - *q;

//     printf("%d, %d\n", a, b);
// }

// main(){
//     int i, *v = malloc(4 * sizeof(int));

//     for(i = 0; i < 4; i++){
//         v[i] = i + 1;
//     }
//     for(i = 0; i < 4; i++){= malloc(4 * sizeof(int))
// }

// typedef struct no{
//     int item;
//     struct no *prox;
// } No;

// main(){
//     No v[4] = {{3, v + 2}, {1, v + 3}, {4, NULL}, {2, v + 0}};

//     for(No *p = v + 1; p != NULL; p = p->prox){
//         printf("%d, %d\n",p->item, p);
//     }
// }

// typedef struct no{
//      int item;
//      struct no *prox;
//  } *Lst;
 
//  Lst no (int x, Lst p){
//      Lst n = malloc(sizeof(struct no));
//      n->item = x;
//      n->prox = p;
//      return n;
//  }

//  main(){
//      Lst p = (1,no(2,no(3,no(4,NULL))));

//      while(p){
//          printf("%d\n", p->item);
//          p = p->prox;
//      }
// }

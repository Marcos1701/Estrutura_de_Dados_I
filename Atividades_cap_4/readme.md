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

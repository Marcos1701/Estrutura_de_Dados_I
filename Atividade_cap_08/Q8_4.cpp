// Usando a função seleciona (), definida na Figura 8.9, 
//crie a função recursiva selectionSort (v,n), que ordena 
//um vetor V com n números inteiros.

#include <iostream>

using namespace std;

#define troca(a, b) { int x = a; a = b; b = x;};

int seleciona (int v[], int n) {
    int i = 0;
    for (int j=1; j<n; j++)
       if( v[i]<v[j] )i=j;
   return i;
}
void selectionsort(int v[], int n) {
   while( n>1){
      troca(v[seleciona(v,n)],v[n-1]);
      n--;
   }
}


void selectionSort(int v[], int n) {
    int aux = n;
    for (int i=0; i<n; i++){
        selectionsort(v, aux);
        aux--;
    }
}

int main(){

    int v[] = {2,4,1,6,5,10,9};

    selectionSort(v, 7);

    for (int i=0; i<7; i++){
        cout << v[i] << endl;
    }
    return 0;
}
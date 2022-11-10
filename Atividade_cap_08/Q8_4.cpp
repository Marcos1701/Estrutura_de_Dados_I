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
    if(n == 1){
        return;
    }
      troca(v[seleciona(v,n)],v[n-1]);
      selectionsort(v, n - 1);
}


// void selectionSort(int v[], int n) {
    
//     if(n == 0) return;
//     selectionsort(v, n);
//     selectionSort(v, n - 1);
// }

int main(){

    int v[] = {2,4,1,6,5,10,9};

    selectionsort(v, 7);

    for (int i=0; i<7; i++){
        cout << v[i] << endl;
    }
    return 0;
}

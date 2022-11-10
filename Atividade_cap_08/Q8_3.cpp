// Usando a função empurra (), 
//que move o item máximo de um vetor 
//para sua última
// posição, crie a função recursiva bubbleSort (v,n),
// que ordena um vetor V com n
// números inteiros.
// void empurra (int v[], int n) {
//    for (int i=0; i<n; i++)
//       if( v[i]>v[i+1])
//           troca (v[i],v[i+11]);
// }

#include <iostream>

using namespace std;

#define troca(a, b) { int x = a; a = b; b = x;};
void empurra (int v[], int n) {
   for (int i = 0; i<n; i++)
      if( v[i] > v[i+1])
          troca(v[i],v[i+1]);
}

void BubbleSort(int v[], int n){
    int aux = n;
    for (int i=0; i<n; i++){
        empurra(v, aux);
        aux--;
    }
}

int main(){

    int v[] = {2,4,1,6,5,10,9};

    BubbleSort(v, 7);

    for (int i=0; i<7; i++){
        cout << v[i] << endl;
    }
    return 0;
}
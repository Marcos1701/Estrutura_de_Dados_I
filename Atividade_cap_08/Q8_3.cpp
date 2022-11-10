

#include <iostream>

using namespace std;

//void bubble_sort(double v[], int tam){
//    int aux = tam;

//    for(int i = 0; i < tam; i++){
//       int cont = 0;
//       for(int j = 0; j < aux; j++){
//          if(v[j]>v[j+1]){
//            double x = v[j];
//            v[j] = v[j+1];
//            v[j+1] = x;
//            cont = 1;
//          }
//       }
//       if(!cont){
//          break;
//       }
//    }
// }

//ou..

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

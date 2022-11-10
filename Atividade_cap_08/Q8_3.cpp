

#include <iostream>

using namespace std;

// Feito por: Marcos Eduardo de Neiva Santos

#define troca(a, b) { int x = a; a = b; b = x;};
void empurra (int v[], int n) {
   for (int i = 0; i<n; i++)
      if( v[i] > v[i+1])
          troca(v[i],v[i+1]);
}

void BubbleSort(int v[], int n){
    if(n == 0){
       return;
    }
    empurra(v, n);
    BubbleSort(v, n - 1);
}

int main(){

    int v[] = {2,4,1,6,5,10,9};

    BubbleSort(v, 7);

    for (int i=0; i<7; i++){
        cout << v[i] << endl;
    }
    return 0;
}

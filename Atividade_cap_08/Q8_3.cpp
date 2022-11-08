#include <iostream>
using namespace std;

void insere (int x, int v[], int n) {
   while(n > 0 && x < v[n-1]) {
      v[n] = v[n-1];
       n--;
    }
   v[n] = x;
}
void insertion_sort (int v[], int n){
    for (int i=0; i<n; i++)
       insere (v[i],v,1);
}

int main(){
   int v[] = {5,6,7,1,2,9,3,4, 9};

   insertion_sort(v, 9);

   for(int i=0; i<9; i++){
      cout << "=> " << v[i] << endl;
   }
}
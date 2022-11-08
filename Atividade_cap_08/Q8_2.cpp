#include <iostream>
using namespace std;

// #define troca(a,b) { double x=a; a=b; b=x; }
// void bubble_sort (double v[], int n) {
//     for (int i=1; i<=n-1; i++)
//        for (int j=0; j<n-i; j++)
//           if( v[j]>v[j+1])
//              troca(v[j],v[j+1]);
// }

void bubble_sort(double v[], int tam){
   //int tam = sizeof(v)/sizeof(v[0]);
   int aux = tam;

   for(int i = 0; i < tam; i++){
      int cont = 0;
      for(int j = 0; j < aux; j++){
         if(v[j]>v[j+1]){
           double x = v[j];
           v[j] = v[j+1];
           v[j+1] = x;
           cont = 1;
         }
      }
      if(!cont){
         break;
      }
   }
}


int main(){
   double v[] = {5.2,6.1,7.2,1.2,2.11,9.47,3.22,4.11, 9.46};

   bubble_sort(v, 9);

   for(int i=0; i<9; i++){
      cout << "=> " << v[i] << endl;
   }
}

#include <iostream>
using namespace std;

/* 23. Leia 3 números, calcule e escreva a média dos números.*/

int main(){

   int valor_1, valor_2, valor_3, media;

   cout << "Digite os valores a seguir: \n=> ";
   cin >> valor_1;
   cout << "=> ";
   cin >> valor_2;
   cout << "=> ";
   cin >> valor_3;

   media = (valor_1 + valor_2 + valor_3) / 3;

   cout << "A media resultante e igual a: " << media << endl;
}
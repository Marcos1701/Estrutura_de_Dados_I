#include <iostream>
using namespace std;

/* 21. Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.*/

int main(){

   int meses, qtd_meses, qtd_anos;

   cout << "Digite a qtd de meses: ";
   cin >> meses;

   qtd_anos = meses / 12;
   qtd_meses = meses % 12;

   cout << meses << " meses, equivalem a " << qtd_anos <<" anos e " << qtd_meses << " meses" << endl;
}
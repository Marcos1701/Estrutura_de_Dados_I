#include <iostream>
using namespace std;

/* 24. Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas emdias.*/

int main(){

   int anos, meses, dias, qtd_dias;

   cout << "Digite os valores a seguir: \n Anos => ";
   cin >> anos;
   cout << "Meses => ";
   cin >> meses;
   cout << "Dias => ";
   cin >> dias;

   qtd_dias = (anos * 365);
   qtd_dias += meses * 30;
   qtd_dias += dias;


   cout << anos << " ano(s), " << meses << " meses e " << dias << " dias equivalem a " << qtd_dias <<" dias, " << endl;
}
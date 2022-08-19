#include <iostream>
using namespace std;

/* 25. Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.*/

int main(){

   int anos, meses, dias, qtd_dias, resto;

   cout << "Digite a qtd de dias a seguir: \n => ";
   cin >> qtd_dias;

   anos = qtd_dias / 365;
   resto = qtd_dias % 365;

   meses = resto / 30;
   dias = resto % 30;


   cout << qtd_dias <<" dias equivalem a " << anos << " ano(s), " << meses << " meses e " << dias << " dias."<< endl;
}
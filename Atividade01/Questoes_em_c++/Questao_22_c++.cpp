#include <iostream>
using namespace std;

/* 22. Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
corresponde.*/

int main(){

   int minutos, qtd_dias, qtd_horas, qtd_minutos, resto;

   cout << "Digite a qtd de minutos: ";
   cin >> minutos;

   qtd_dias = minutos / 1440;
   resto = minutos % 1440;

   qtd_horas = resto / 24;
   qtd_minutos = resto % 24;


   cout << minutos << " minutos, equivalem a " << qtd_dias <<" dias, " << qtd_horas << " horas e " << qtd_minutos << " minutos" << endl;
}
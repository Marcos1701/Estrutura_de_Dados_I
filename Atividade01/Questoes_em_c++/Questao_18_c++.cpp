#include <iostream>
using namespace std;

/* 18. Leia um valor em m, calcule e escreva o equivalente em cm.*/

main()
{
    int valor_m, valor_cm;

    cout << "Digite o valor em metros: ";
    cin >> valor_m;

    valor_cm = valor_m * 100;

    cout << "O valor em m e equivalente a: " << valor_cm << " Centimetros";
}
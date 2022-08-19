#include <iostream>
using namespace std;

/* 16. Leia um valor em km, calcule e escreva o equivalente em m.*/

main()
{
    int valor_km, valor_m;

    cout << "Digite o valor em km: ";
    cin >> valor_km;

    valor_m = valor_km * 1000;

    cout << "O valor resultante em m e: " << valor_m;
}
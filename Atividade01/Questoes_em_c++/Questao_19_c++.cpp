#include <iostream>
using namespace std;

/* 19. Leia um número inteiro de metros, calcule e
 escreva quantos Km e quantos metros ele corresponde. */

main()
{
    int valor_m, valor_km, valor_metros;

    cout << "Digite o valor em m: ";
    cin >> valor_m;

    valor_km = valor_m / 1000;
    valor_metros = valor_m % 1000;

    cout << "O valor inserido corresponde a: " << valor_km << " Km e " << valor_metros << " metros";
}
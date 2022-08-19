#include <iostream>
using namespace std;

/* 17. Leia um valor em kg (quilograma),
calcule e escreva o equivalente em g(grama).*/

main()
{

    int valor_kg, valor_g;

    cout << "Insira o valor em kg: ";
    cin >> valor_kg;

    valor_g = valor_kg * 1000;

    cout << "O valor em g resultante e: " << valor_g << " Gramas";
}
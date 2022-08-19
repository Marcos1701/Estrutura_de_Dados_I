#include <iostream>
using namespace std;

/* 14. Leia uma temperatura em °C, calcule e
 escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)*/

main()
{

    int valor_fahrenheit, valor_celsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> valor_celsius;

    valor_fahrenheit = (9 * valor_celsius + 160) / 5;

    cout << "A temperatura em Fahrenheit e: " << valor_fahrenheit << endl;
}
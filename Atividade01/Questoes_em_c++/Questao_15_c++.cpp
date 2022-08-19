#include <iostream>
using namespace std;

/*15. Leia uma temperatura em °F, calcule e
escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).*/

main()
{
    int valor_fahrenheit, valor_celsius;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> valor_fahrenheit;

    valor_celsius = (5 * valor_fahrenheit - 160) / 9;

    cout << "A temperatura resultante em Celsius e: " << valor_celsius;
}
#include <iostream>
using namespace std;

main()
{

    int valor_em_dolar, valor_em_real;

    cout << "Digite o valor em dolar: ";
    cin >> valor_em_dolar;
    valor_em_real = valor_em_dolar * 5.10;

    cout << valor_em_dolar << " dolares equivale a R$ " << valor_em_real << " reais.";
}

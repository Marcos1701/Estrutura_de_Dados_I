#include <iostream>
using namespace std;

main()
{
    int valor_1, valor_2, resto;

    cout << "Digite o primeiro valor: ", cin >> valor_1;

    cout << "Digite o segundo valor: ", cin >> valor_2;

    float quociente = valor_1 / valor_2;
    resto = valor_1 % valor_2;

    cout << "O resultado da divisao e " << quociente;
    cout << "\nO resto da divisao e " << resto;
}
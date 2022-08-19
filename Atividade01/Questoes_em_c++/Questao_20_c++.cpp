#include <iostream>
using namespace std;

/*20. Leia um número inteiro de horas, calcule e
escreva quantas semanas, quantos dias e quantas horas ele
corresponde. */

main()
{
    int valor_h, qtd_semanas, qtd_dias, qtd_horas, resto;

    cout << "Digite o valor em horas: ";
    cin >> valor_h;

    qtd_semanas = valor_h / 168;
    resto = valor_h % 168;
    qtd_dias = resto / 24;
    qtd_horas = resto % 24;

    cout << "O valor inserido corresponde a: " << qtd_semanas << " semanas, " << qtd_dias << " dias e " << qtd_horas << " horas";
}
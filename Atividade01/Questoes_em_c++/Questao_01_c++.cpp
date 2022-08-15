#include <iostream>
using namespace std;

/*1. Leia uma velocidade em m/s, calcule e
escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)*/

main()
{

    float velocidade_m_s;
    float velocidade_km_h;

    cout << "Digite o valor em m/s : ";
    cin >> velocidade_m_s;

    velocidade_km_h = velocidade_m_s * 3.6;

    cout << velocidade_m_s << " em m/s equivale a " << velocidade_km_h << " km/h" << endl;
}

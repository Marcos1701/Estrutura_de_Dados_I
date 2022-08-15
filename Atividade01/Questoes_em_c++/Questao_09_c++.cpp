#include <iostream>
using namespace std;

/*9. Leia o valor da base e altura de um triângulo, calcule e
escreva sua área. (área=(base * altura)/2)*/

main()
{
    float altura, base, area;

    cout << "Digite o valor da base do triangulo: \n=> ";
    cin >> base;
    cout << "Digite a altura do triangulo: \n=> ";
    cin >> altura;

    area = (altura * base) / 2;
    cout << "area do triangulo: " << area;
}

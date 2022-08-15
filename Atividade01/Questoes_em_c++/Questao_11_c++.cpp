#include <iostream>
#include <math.h>

using namespace std;

/*11. Leia o valor da base e altura de um retângulo, calcule e
escreva sua área. (área = base * altura)*/

main()
{
    float base, altura, area;

    cout << "Digite o valor da base do quadrado: \n=> ";
    cin >> base;
    cout << "Digite a altura do quadrado: \n=> ";
    cin >> altura;

    area = base * altura;
    cout << "area do retangulo: " << area;
}

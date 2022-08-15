#include <iostream>
#include <math.h>

using namespace std;
/*13. Leia o valor do raio de uma esfera, calcule e
escreva seu volume. (v = (4 * pi * r3) / 3) (pi = 3,14)*/

main()
{
    float raio, pi = 3.14;

    cout << "Digite o valor do raio da esfera: \n=> ";
    cin >> raio;

    float volume = (4 * pi * (pow(raio, 3))) / 3;
    cout.precision(2);
    cout << "volume da esfera: " << fixed << volume;
}

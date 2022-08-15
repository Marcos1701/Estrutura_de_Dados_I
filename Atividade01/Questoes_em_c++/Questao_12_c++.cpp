#include <iostream>

using namespace std;

/*12. Leia o valor do raio de uma circunferência, calcule e
 escreva seu comprimento.(c = 2 * pi *r)*/

main()
{
    float raio, comp, pi = 3.14;

    cout << "Digite o raio da cincunferencia: \n=> ";
    cin >> raio;

    comp = 2 * pi * raio;
    cout << "comprimento da circunferencia: " << comp;
}

#include <iostream>
#include <math.h>

using namespace std;

/*10. Leia o valor do lado de um quadrado, calcule e
escreva sua área. (área = lado2)*/

main()
{
    float lado, area;

    cout << "Digite o valor d lado do quadrado: \n=> ";
    cin >> lado;

    area = pow(lado, 2);
    cout << "area do quadrado: " << area;
}

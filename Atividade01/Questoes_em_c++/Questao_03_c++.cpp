#include <iostream>
using namespace std;

/* 3. Leia uma velocidade em km/h,
 calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6) */

main()
{

    int velo_hm_h, velo_ms_s;

    cout << "Digite o valor em km/h: ";
    cin >> velo_hm_h;

    velo_ms_s = velo_hm_h / 3.6;

    cout << velo_hm_h << " km/h equivale a " << velo_ms_s << " m/s.";
}
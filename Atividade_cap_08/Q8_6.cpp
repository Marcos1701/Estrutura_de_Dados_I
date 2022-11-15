#include <iostream>

using namespace std;

int linearSearch(int valor_procurado, int v[], int tam)
{

    if (tam < 0)
        return 0;

    if (valor_procurado == v[tam])
    {
        return 1;
    }
    return linearSearch(valor_procurado, v, tam - 1);
}

int main()
{
    int v[] = {1, 4, 2, 3, 6, 7, 5, 0, -1, 10};

    int x = 9;

    if (linearSearch(x, v, 9))
        cout << "O vetor possui o valor : " << x << endl;
    else
        cout << "O vetor nao possui o valor: " << x << endl;
}

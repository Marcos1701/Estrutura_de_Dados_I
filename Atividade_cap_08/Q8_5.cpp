//- Feito por: Marcos Eduardo de Neiva Santos
#include <iostream>

using namespace std;

void insertionSort(int v[], int n)
{
    if (n <= 1)
        return;

    insertionSort(v, n - 1);

    int anterior = v[n - 1];
    int k = n - 2;

    while (k >= 0 && v[k] > anterior)
    {
        v[k + 1] = v[k];
        k--;
    }

    v[k + 1] = anterior;
}

int main()
{
    int v[] = {1, 4, 2, 3, 6, 7, 5, 0, -1, 10};

    insertionSort(v, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}

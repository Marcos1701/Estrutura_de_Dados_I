#include <iostream>

using namespace std;

void insertionSort(int v[], int n)
{ // para ordenar o vetor..
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

int binarySearch(int x, int v[], int u, int p = 0)
{
    if (p > u)
    {
        return 0;
    }

    int m = (p + u) / 2;
    if (x == v[m])
        return 1;
    else
    {
        if (x < v[m])
            binarySearch(x, v, m - 1, p);
        else
            binarySearch(x, v, u, m + 1);
    }
}

int main()
{
    int v[] = {1, 4, 2, 3, 6, 7, 5, 0, -1, 10};
    insertionSort(v, 9); //ordenando o vetor..

    int x = 3;

    if (binarySearch(x, v, 9))
        cout << "O vetor possui o valor : " << x << endl;
    else
        cout << "O vetor nao possui o valor: " << x << endl;
}

#include <iostream>

using namespace std;

void Quick(int vetor[10], int inicio, int fim);

int main()
{

    int v1[] = {72, 69, 51, 46, 33, 28, 15};
    int v2[] = {48, 28, 51, 33, 72, 15, 69};

    Quick(v1, 0, 6);

    cout << "----- Vetor 1 ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << v1[i] << endl;
    Quick(v2, 0, 6);

    cout << "\n----- Vetor 2 ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << v2[i] << endl;
}

int parciona(int v[], int ini, int f)
{
    int x = v[ini];
    ini--;
    f++;
    while (ini < f)
    {
        do
            f--;
        while (v[f] > x);
        do
            ini++;
        while (v[ini] < x);
        if (ini < f)
        {
            int aux = v[ini];
            v[ini] = v[f];
            v[f] = aux;
        }
    }
    return f;
}

void Quick(int vetor[10], int inicio, int fim)
{

    if (inicio >= fim) 
        return;        

    int meio = parciona(vetor, inicio, fim); 
    Quick(vetor, inicio, meio);              
    Quick(vetor, meio + 1, fim);             
}

// Saida resultante:
// ----- Vetor 1 ordenado -----
// => 15
// => 28
// => 33
// => 46
// => 51
// => 69
// => 72
// Qtd operacoes realizadas: 4

// ----- Vetor 2 ordenado -----
// => 15
// => 28
// => 33
// => 48
// => 51
// => 69
// => 72
// Qtd operacoes realizadas: 8

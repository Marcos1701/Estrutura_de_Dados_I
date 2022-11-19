#include <iostream>

using namespace std;

void Quick(int vetor[10], int inicio, int fim);

int qtd_operacoes = 0;

int main()
{

    int v1[] = {72, 69, 51, 46, 33, 28, 15};
    int v2[] = {48, 28, 51, 33, 72, 15, 69};
    int pior_caso[] = {2, 5, 4, 13, 9, 10, 8};
    int melhor_caso[] = {12, 10, 8, 6, 4, 2, 1};

    Quick(v1, 0, 6);

    cout << "----- Vetor 1 ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << v1[i] << endl;
    cout << "Qtd operacoes realizadas: " << qtd_operacoes << endl;
    qtd_operacoes = 0;
    Quick(v2, 0, 6);

    cout << "\n----- Vetor 2 ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << v2[i] << endl;
    cout << "Qtd operacoes realizadas: " << qtd_operacoes << endl;

    qtd_operacoes = 0;
    Quick(pior_caso, 0, 6);
    cout << "\n----- Vetor pior caso ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << pior_caso[i] << endl;
    cout << "Qtd operacoes realizadas: " << qtd_operacoes << endl;

    qtd_operacoes = 0;
    Quick(melhor_caso, 0, 6);
    cout << "\n----- Vetor melhor caso ordenado -----" << endl;
    for (int i = 0; i < 7; i++)
        cout << "=> " << melhor_caso[i] << endl;
    cout << "Qtd operacoes realizadas: " << qtd_operacoes << endl;
}

void Quick(int vetor[10], int inicio, int fim)
{
    int ini = inicio;
    int f = fim;
    int x = vetor[(inicio + fim) / 2];
    int aux;

    while (ini <= f)
    {
        while (vetor[ini] < x && ini < fim)
        {
            ini++;
            qtd_operacoes++;
        }
        while (vetor[f] > x && f > ini)
        {
            f--;
            qtd_operacoes++;
        }

        if (ini <= f)
        {
            aux = vetor[ini];
            vetor[ini] = vetor[f];
            vetor[f] = aux;
            ini++;
            f--;
        }
    }

    if (f > inicio)
        Quick(vetor, inicio, f);
    if (ini < fim)
        Quick(vetor, ini, fim);
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

// ----- Vetor pior caso ordenado -----
// => 2
// => 4
// => 5
// => 8
// => 9
// => 10
// => 13
// Qtd operacoes realizadas: 14

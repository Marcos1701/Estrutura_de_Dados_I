#include <iostream>
#include <string.h>
using namespace std;

void insere(int x, int v[], int n)
{
    while (n > 0 && x < v[n - 1])
    {
        v[n] = v[n - 1];
        n--;
    }
    v[n] = x;
}

void insertion_sort(int v[], int n)
{
    for (int i = 0; i < n; i++)
        insere(v[i], v, i);
}

void insere_cad_caracter(char x[], char v[][30], int n, int tam)
{
    char aux[10];

    int j = n;

    while (j < tam)
    {
        if (strcmp(x, v[j]) > 0)
        {
            strcpy(aux, x);
            strcpy(v[n], v[j]);
            strcpy(v[j], aux);
        }
        j++;
    }
}

void insertion_sort_to_cad_caracter(char v[][30], int n, int tam)
{
    for (int i = 0; i < n; i++)
        insere_cad_caracter(v[i], v, i, tam);
}

int main()
{
    int x;
    cout << "Digite quantos nomes(ou palavras) serao inseridos: ";
    cin >> x;
    char s[x][30];
    // char s[][10] = {"Alex", "Bernardo", "Wesley", "Vitoria", "Marcos", "Ze", "Carlos", "David"};

    for (int i = 0; i < x; i++)
    {
        cout << "Digite o nome/palavra: ";
        cin >> s[i];
    }

    insertion_sort_to_cad_caracter(s, 8, 8);

    cout << endl
         << "Nomes ordenados: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "=> " << s[i] << endl;
    }
}

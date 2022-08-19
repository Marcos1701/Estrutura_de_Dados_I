#include <iostream>
using namespace std;

/* 29. Um programa para gerenciar os saques de um
caixa eletrônico deve possuir algum mecanismo para decidir o
numero de notas de cada valor que deve ser
disponibilizado para o cliente que realizou o saque. Um possível
critério seria o da "distribuição ótima" no
sentido de que as notas de menor valor disponíveis fossem
distribuídas em número mínimo possível. Por exemplo,
se a maquina só dispõe de notas de R$ 50, de R$ 20,
de R$ 10, de R$ 5 e de R$ 2, para uma quantia
solicitada de R$ 87, o programa deveria indicar uma nota de
R$ 50, uma nota de R$20,00, uma nota de R$ 10,
uma nota de R$ 5 e uma nota de R$ 2. Escreva um programa
que receba o valor da quantia solicitada e
retorne a distribuição das notas de acordo com o critério da
distribuição ótima.*/

int main()
{

    int qtd_100, qtd_50, qtd_20, qtd_10, qtd_5, qtd_2, resto;
    int valor_saque;

    cout << "Digite o valor desejado: \n=> ";
    cin >> valor_saque;

    qtd_100 = valor_saque / 100;
    resto = valor_saque % 100;

    qtd_50 = resto / 50;
    resto = resto % 50;

    qtd_20 = resto / 20;
    resto = resto % 20;

    qtd_10 = resto / 10;
    resto = resto % 10;

    qtd_5 = resto / 5;
    qtd_2 = resto % 5;

    cout << "O retorno seria de :\n"
         << qtd_100 << " notas de R$ 100\n"
         << qtd_50 << " notas de R$ 50\n"
         << qtd_20 << " notas de R$ 20\n"
         << qtd_10 << " notas de R$ 10\n"
         << qtd_5 << " notas de R$ 5 e " << qtd_2 << " notas de R$ 2." << endl;
}
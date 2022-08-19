#include <iostream>
using namespace std;

/* 27. O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de fábrica). Supondo que
a percentagem do distribuidor seja de 28% e os
impostos de 45%, escreva um programa que leia o custo de
fábrica de um carro e escreva o custo ao
consumidor.*/

int main()
{

    int valor_distribuidor, valor_impostos,
        valor_montagem_carro, custo_total;

    cout << "Digite o custo de fabrica do carro: \n=> R$ ";
    cin >> custo_total;

    valor_distribuidor = custo_total * 0.28;
    valor_impostos = custo_total * 0.45;
    valor_montagem_carro = custo_total - (custo_total * 0.73);

    cout << "O custo resultante e: ";
    cout << "\nValor recebido pelo distribuidor: R$" << valor_distribuidor;
    cout << "\nImpostos : R$ " << valor_impostos;
    cout << "\nValor do carro em si: R$ " << valor_montagem_carro << endl;
}
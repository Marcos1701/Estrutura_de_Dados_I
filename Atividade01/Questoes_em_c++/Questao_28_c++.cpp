#include <iostream>
using namespace std;

/* 28. Sabendo que latão é constituído de 70% de cobre e
30% de zinco, escreva um programa que calcule a
quantidade de cada um desses componentes para se
obter certa quantidade de latão (em kg), informada pelo
usuário.*/

int main()
{

    float qtd_latao, qtd_zinco, qtd_cobre;

    cout << "Digite a quantidade de latao desejada (em kg): \n=> ";
    cin >> qtd_latao;

    qtd_cobre = qtd_latao * 0.70;
    qtd_zinco = qtd_latao * 0.30;

    cout << "Seriam necessarios " << qtd_cobre << " kg de cobre e " << qtd_zinco << " kg de zinco, para se obter " << qtd_latao << " kg de latao." << endl;
}
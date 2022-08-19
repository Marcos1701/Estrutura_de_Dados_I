#include <iostream>
using namespace std;

/* 30. Uma loja vende seus produtos no sistema entrada mais duas
prestações, sendo a entrada maior ou igual a cada
uma das duas prestações; estas devem ser iguais, inteiras e as
 maiores possíveis. Por exemplo, se o valor da
mercadoria for R$ 270,00, a entrada e as duas prestações são
 iguais a R$ 90,00; se o valor da mercadoria for
R$ 302,00, a entrada é de R$ 102,00 e as duas prestações são
iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e escreva o valor da entrada e
das duas prestações, conforme as regras acima.*/

int main()
{

    int valor_mercadoria, valor_entrada, valor_prestacao;

    cout << "Digite o valor da mercadoria: \n=> R$ ";
    cin >> valor_mercadoria;

    valor_entrada = (valor_mercadoria / 3) + (valor_mercadoria % 3);

    valor_prestacao = valor_mercadoria / 3;

    cout << "valor entrada: R$ " << valor_entrada << "\nvalor parcelas: R$ " << valor_prestacao << endl;
}
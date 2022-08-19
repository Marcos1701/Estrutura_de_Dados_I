#include <iostream>
using namespace std;

/* 26. Calcule a quantidade de dinheiro gasta por um fumante.
 Dados de entrada: o número de anos que ele fuma, o
no de cigarros fumados por dia e
o preço de uma carteira (1 carteira tem 20 cigarros).*/

int main()
{

    int anos, qtd_cigarros_p_dia, preco_cartela;

    cout << "A quantos anos voce fuma? \n=>";
    cin >> anos;

    cout << "Quantos cigarros voce fuma por dia? \n=>";
    cin >> qtd_cigarros_p_dia;

    cout << "Digite o preco da carteira de cigarros que voce fuma: \n=>";
    cin >> preco_cartela;

    float preco_cigarro_ind = preco_cartela / 20;
    int valor_total = (qtd_cigarros_p_dia * preco_cigarro_ind) * 365;
    valor_total = valor_total * anos;

    cout << "Eita, voce ja gastou aproximadamente R$ " << valor_total << " em cigarros" << endl;
}
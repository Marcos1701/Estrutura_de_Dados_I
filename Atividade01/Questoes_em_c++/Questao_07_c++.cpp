#include <iostream>
using namespace std;

/*7. Leia um valor em real (R$), calcule e
escreva 70% deste valor.*/

main()
{
    int valor, valor_retorno;

    cout << "Digite o valor a seguir: \nR$ ";
    cin >> valor;

    valor_retorno = valor * 0.75;
    cout << "valor resultante : R$ " << valor_retorno;
}

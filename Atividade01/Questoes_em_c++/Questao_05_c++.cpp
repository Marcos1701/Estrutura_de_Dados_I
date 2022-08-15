#include <iostream>
using namespace std;

/*5. Leia um número inteiro (3 dígitos) e
escreva o inverso do número. (Ex.: num = 532 ; inverso =235)*/

main()
{
    string numero;

    cout << "Digite o numero a seguir: ";
    cin >> numero;

    for (int i = numero.length(); i >= 0; i--)
        cout << numero[i];
}

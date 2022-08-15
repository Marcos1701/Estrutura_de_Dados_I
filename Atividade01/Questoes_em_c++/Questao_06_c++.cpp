#include <iostream>
using namespace std;

/*6. Leia o salário de um trabalhador e
escreva seu novo salário com um aumento de 25%.*/

main()
{
    int salario, novo_salario;

    cout << "Digite o salario a seguir: ";
    cin >> salario;

    novo_salario = salario + (salario * 0.25);
    cout << "Seu novo salario e: R$ " << novo_salario;
}

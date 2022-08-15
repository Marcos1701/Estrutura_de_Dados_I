#include <iostream>
using namespace std;

/*8. Leia 3 notas de um aluno e o peso de
cada nota, calcule e escreva a média ponderada.*/

main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    cout << "Digite a primeira nota a seguir: \n=> ";
    cin >> nota1;
    cout << "Digite a segunda nota a seguir: \n=> ";
    cout << nota2;
    cout << "Digite a terceira nota a seguir: \n=> ";
    cin >> nota3;

    cout << "Certo, agora digite os respecticos pesos\n";
    cout << "Peso da primeira nota: ";
    cin >> peso1;

    cout << "Peso da segunda nota: ";
    cin >> peso2;

    cout << "Peso da terceira nota: ";
    cin >> peso3;

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3));
    media = media / (peso1 + peso2 + peso3);
    cout << "media resultante : %.2f", media;
}

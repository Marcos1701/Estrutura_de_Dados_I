#include <stdio.h>

/*8. Leia 3 notas de um aluno e o peso de
cada nota, calcule e escreva a média ponderada.*/

main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a primeira nota a seguir: \n=> ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota a seguir: \n=> ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota a seguir: \n=> ");
    scanf("%f", &nota3);

    printf("Certo, agora digite os respecticos pesos\n");
    printf("Peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Peso da terceira nota: ");
    scanf("%f", &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3));
    media = media / (peso1 + peso2 + peso3);
    printf("media resultante : %.2f", media);
}

#include <stdio.h>

/*5. Leia um número inteiro (3 dígitos) e
escreva o inverso do número. (Ex.: num = 532 ; inverso =235)*/

main()
{
    char numero[3];

    printf("Digite o numero a seguir: ");
    scanf("%s", numero);

    for (int i = 2; i >= 0; i--)
        printf("%c", numero[i]);
}

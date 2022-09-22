#include <iostream>
#include "pilha_int_vetor.h"
#include <string.h>
#include <ctype.h>
using namespace std;

int prio(char o)
{

    if (o == '(')
        return 0;
    else if (o == '~')
        return 1;
    else if (o == '&')
        return 2;
    else if (o == '|')
        return 3;
    return 0; // operador invalido!
}

int valor (char *valores){
    Pilha *p = pilha(strlen(valores));
    char v;
    for(int i = 0; valores[i]; i++){
        v = valores[i];
        if(isdigit(valores[i])){
            empilha(valores[i]-'0', p);
        }else{
            int x = desempilha(p);
            int y = desempilha(p);

            if (v == '~'){
                if(x == 'V'){
              empilha(y, p);
              empilha('F', p);
            }else{
                empilha(y, p);
                empilha('V', p);
            }
              break;
            }
            else if (v == '&'){
                if((x == 'V' && y == 'V') && (x == 'F' && y == 'F'))
                empilha('V', p);
                else
                empilha('F', p);
                break;
            }
            else if (v == '|'){
                if ((x == 'V' && y != 'V') || (x == 'F' && y != 'F') 
                || (x == 'F' && y != 'F') 
                || (x == 'V' && y != 'V')){
                empilha('V', p);
                }
                else
                empilha('F', p);
                break;
            }
            
        }
    }
    char z = desempilha(p);
    destroi(p);

    return z;
}

char *gerar_sufixa(char *inf)
{
    static char s[250];
    char *x;
    int k = 0;
    x = inf;

    Pilha *p = pilha(strlen(inf));

    for (int i = 0; *x != '\0'; i++)
    {
        if (isalnum(*x))
        {
            cout << "valor emp: " << *x << endl;
            s[k++] = *x;
        }
        else if (*x == '(')
        {
            empilha(*x, p);
        }
        else if (*x == ')')
        {
            while (p->item[p->topo] != '(')
            {
                s[k++] = desempilha(p);
            }
            desempilha(p);
        }
        else
        {
            while (prio(p->item[p->topo]) >= prio(*x))
            {
                s[k++] = desempilha(p);
            }
            empilha(*x, p);
            cout << "valor emp: " << *x << endl;
        }
        x++;
    }
    while (p->topo != -1)
    {
        s[k++] = desempilha(p);
    }
    s[k++] = '\0';
    cout << "s: " << s << endl;
    destroi(p);
    return s;
}

int main()
{

    char infixa[150];

    cout << "Digite a expressao infixa a seguir: " << endl
         << "=> ";
    cin >> infixa;

    char *sufixa;
    sufixa = gerar_sufixa(infixa);
    
    int v = valor(sufixa);
    //(sufixa, gerar_sufixa(infixa));

    cout << "\nInfixa digitada: " << infixa << endl;
    cout << "Sufixa resultante: " << sufixa << endl;
    cout << "Valor resultante: " << valor << endl;


    return 0;
}

#include <iostream>
#include "pilha_int_vetor.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

typedef struct pilha
{
    int topo, max, tamanho = 0;
    int *item;
} Pilha;

Pilha *pilha(int tam)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = -1;
    p->item = (float *)malloc((tam) * sizeof(float));
    p->max = tam;
    return p;
}

void empilha(int valor, Pilha *p)
{

    if (p->topo == -1)
    {
        p->topo++;
        p->tamanho++;
        p->item[p->topo] = valor;
    }
    else if (p->topo == p->max)
    {
        printf("Pilha cheia");
    }
    else
    {
        p->topo++;
        p->tamanho++;
        p->item[p->topo] = valor;
    }

    printf("\nO valor: %d foi empilhado\n\n", valor);
    return;
}

int desempilha(Pilha *p)
{
    int valor = p->item[p->topo];

    if (p->topo == -1)
    {
        printf("\nA pilha esta vazia\n\n");
    }
    else
    {
        p->item[p->topo] = 0;
        p->topo--;
        p->tamanho--;
        return valor;
        // printf("\nO valor: %d foi desempilhado\n", valor);
        // printf("Tamanho atual da pilha: %d\n\n", p->tamanho);
    }
    return valor;
}

int prio(char o)
{

    if (o == '(')
        return 0;
    else if (o == '-' || o == '+')
        return 1;
    else if (o == '*' || o == '/')
        return 2;
    return 0; // operador invalido!
}

int valor (char *x){
    Pilha p = pilha(strlen(x));
    for(int i = 0; x[i]; i++){
        if(isdigit(x[i])){
            empilha(x[i]-'0', p);
        }else{
            int x = desempilha(p);
            int y = desempilha(p);

            if (x[i] == '+'){
              empilha(x + y, p);
              break;
            }
            else if (x[i] == '-'){
                empilha(x - y, p);
                break;
            }
            else if (x[i] == '*'){
                empilha(x * y, p);
                break;
            }else if(x[i] == '/'){
                empilha(x / y, p);
                break;
            }
            
        }
    }
    int z = desempilha(p);
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
            s[k++] = ' ';
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
                s[k++] = ' ';
            }
            desempilha(p);
        }
        else
        {
            while (prio(p->item[p->topo]) >= prio(*x))
            {
                s[k++] = desempilha(p);
                s[k++] = ' ';
            }
            empilha(*x, p);
            cout << "valor emp: " << *x << endl;
        }
        x++;
    }
    while (p->topo != -1)
    {
        s[k++] = desempilha(p);
        s[k++] = ' ';
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
    
    int valor = valor(sufixa);
    //(sufixa, gerar_sufixa(infixa));

    cout << "\nInfixa digitada: " << infixa << endl;
    cout << "Sufixa resultante: " << sufixa << endl;
    cout << "Valor resultante: " << valor << endl;


    return 0;
}

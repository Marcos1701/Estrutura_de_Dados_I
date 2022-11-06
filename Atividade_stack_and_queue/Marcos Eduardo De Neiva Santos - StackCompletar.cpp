#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack : public stack<T>
{
protected:
    stack<T> pilha;

public:
    T popStack()
    {
        T tmp = pilha.top();
        pilha.pop();
        return tmp;
    }

    void popTodos()
    {
        while (!pilha.empty())
        {
            cout << "=> " << pilha.top() << " removido" << endl;
            pilha.pop();
        }
        return;
    }

    void simulaFila(T novo)
    {

        stack<T> aux;

        while (!pilha.empty())
        {
            cout << pilha.top() << endl;
            aux.push(pilha.top());
            pilha.pop();
        }
        aux.push(novo);
        pilha = aux;
    }
};

int main()

{

    Stack<int> teste;

    teste.push(1);
    teste.push(2);
    teste.push(3);
    teste.push(4);
    teste.push(5);
    teste.simulaFila(1);

    while (!teste.empty())
    {
        cout << teste.top() << endl;
        teste.pop();
    }
    return 0;
}

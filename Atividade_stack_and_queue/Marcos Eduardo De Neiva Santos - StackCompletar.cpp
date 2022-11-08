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
        static T tmp = pilha.top();
        pilha.pop();
        return tmp;
    }

    void popTodos()
    {
        while (!pilha.empty())
        {
            cout << pilha.top() << endl;
            pilha.pop();
        }
        return;
    }

    void simulaFila(T novo)
    {

        stack<T> aux;

        if(pilha.empty()){
            pilha.push(novo);
        }else{

          while (!pilha.empty())
          {
              aux.push(pilha.top());
              pilha.pop();
          }
          aux.push(novo);

          while (!aux.empty())
          {
              pilha.push(aux.top());
              aux.pop();
          }
        }
    }
};

int main()

{

    Stack<int> teste;

    teste.simulaFila(1);
    teste.simulaFila(2);
    teste.simulaFila(3);
 
    teste.popTodos();
    return 0;
}

#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue : public queue<T>
{
protected:
    queue<T> fila;

public:
    T popQueue()
    {
        T tmp = fila.front();
        fila.pop();
        return tmp;
    }

    void popTodos()
    {

        while (!fila.empty())
        {
            cout << fila.front() << endl;
            fila.pop();
        }
    }

    void simulaPilha(T novo)
    {
        queue<T> aux;

        if(fila.empty()){
            fila.push(novo);
        }else{

          while (!fila.empty())
          {
              aux.push(fila.front());
              fila.pop();
          }

          fila.push(novo);
          while (!aux.empty())
          {
              fila.push(aux.front());
              aux.pop();
          }
        }
    }
};

main()
{
    Queue<int> fila;
    fila.simulaPilha(4);
    fila.simulaPilha(5);
    fila.simulaPilha(3);

    fila.popTodos();
}

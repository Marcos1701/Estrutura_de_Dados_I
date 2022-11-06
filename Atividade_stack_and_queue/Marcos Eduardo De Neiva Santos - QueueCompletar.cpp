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
            fila.pop();
        }
    }

    void simulaPilha(T novo)
    {
        queue<T> aux;

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
};

main()
{
    Queue<int> fila;
    fila.push(4);
    fila.push(5);
    fila.simulaPilha(3);

    while (!fila.empty())
    {
        cout << "=> " << fila.front() << endl;
        fila.pop();
    }
}

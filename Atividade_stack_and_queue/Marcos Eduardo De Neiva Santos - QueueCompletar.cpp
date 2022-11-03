#include <queue>
#include <iostream>
using namespace std;

template <class T>
class Queue: public queue<T> {
	protected:
		queue<T> fila;
	public:
	T popQueue(){
		T tmp=fila.front();
		fila.pop();
		return tmp;
	}
	
	
	void popTodos(){				
	   
       for(int i = 0; i < fila.size(); i++){
           fila.pop();
       }
    }
    
    void simulaPilha(T novo){
        queue<T> aux;

        for(int i = 0; i < fila.size(); i++){
            aux.push(fila[i]);
        }
        fila.popTodos();
        for(int i = 0; i < fila.size(); i++)
           fila.push(aux.pop());

        free(aux);
    }
};

main(){
	Queue<int> fila;
	fila.push(4);
	fila.push(5);
    fila.simulaPilha();
	cout<<fila.front()<<endl;
	

}

#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}
	
	
	void popTodos(){
		for(int i = 0; i < pilha.size(); i++){
            cout << "=> " << pilha.top() << " removido" << endl;
            pilha.pop();
        }
    }
	
	void simulaFila(T novo){
        
       int valores[pilha.size()];
        for(int i = pilha.size() - 1; i >= 0; i++){
            valores[i] = pilha.top();
            pilha.pop();
        }

        for(int i = 0; i < pilha.size(); i++){
          pilha.push(valores[i]);
        }
	}
	
	
};

main(){
	
	Stack<int> teste;

    teste.push(1);
    teste.push(2);

    cout << "=> " << teste.top() << endl;
    teste.popTodos();
    teste.push(0);
    cout << "=> " << teste.top() << endl;

    teste.push(12);
    teste.push(122);

    teste.simulaFila(1);
    cout << "=> " << teste.top() << endl;

    cout << "=> " << teste.top() << endl;
    teste.pop();
    cout << "=> " << teste.top() << endl;
    teste.pop();
    cout << "=> " << teste.top() << endl;

}

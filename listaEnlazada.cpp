#include <iostream>
#include <cstdlib>

using namespace std;

class listaEnlazada{
    private:
        typedef struct nodo{
            int num;
            nodo* siguiente;
        }* ptrNode;

        ptrNode primero;
        ptrNode actual;
        ptrNode temp;

    public:
        listaEnlazada(){
            primero = NULL;
            actual = NULL;
            temp = NULL;
        };
        void Agregar(int nuevoNum){
            ptrNode puntero = new nodo;
            puntero -> siguiente = NULL;
            puntero -> num = nuevoNum;

            if(primero != NULL){
                puntero -> siguiente = primero;
                primero = puntero;
            }
            else{
                primero = puntero;
            }
        };
        void Eliminar(int delNum){
            ptrNode puntero = NULL;
            temp = primero;
            actual = primero;

            while(actual != NULL && actual -> num != delNum){
                temp = actual;
                actual = actual -> siguiente;
            }
            if(actual == NULL){
                cout << delNum << " NO esta en la lista\n";
                delete puntero;
            }
            else{
                puntero = actual;
                actual = actual -> siguiente;
                temp -> siguiente = actual;
                delete puntero;
                cout << "El numero " << delNum << " fue eliminado...\n";
            }
        };
        void ImprimirLista(){
            actual = primero;
            cout << "---" << endl;
            while(actual != NULL){
                cout << actual -> num << endl;
                actual = actual -> siguiente;
            }
            cout << "---" << endl;
        };
};
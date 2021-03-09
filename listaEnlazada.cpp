#include <iostream>
#include <cstdlib>
#include "node.cpp"

using namespace std;

//void * operator new(size_t size){
    //ptrNode puntero = new nodo;
    //puntero -> num = malloc(size);
//}

void operator delete(void * puntero, collector usando){
    usando.Insertar(puntero);
    free(puntero);
}

class listaEnlazada{
    private:

        ptrNode primero;
        ptrNode actual;
        ptrNode temp;
        collector nuevoCollector;

    public:
        listaEnlazada(){
            primero = NULL;
            actual = NULL;
            temp = NULL;
        };
        void Agregar(int nuevoNum){
            if(nuevoCollector.Validar() == true){
                int espacio = nuevoCollector.getEspacio();
            }
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
#include <iostream>
#include <cstdlib>
#include "node.cpp"
#include "newCollector.cpp"

using namespace std;



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
            if(nuevoCollector.Valorar() == true){

            }
            else{

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
                cout << actual -> num << " : "<< &(actual-> num) << endl;
                actual = actual -> siguiente;
            }
            cout << "---" << endl;
        };
        bool getCollector(){
            if(nuevoCollector.Valorar() == true){
                return true;
            }
            else{
                return false;
            }
        };
        int * getDir(){
            return nuevoCollector.getDir();
        };
        void agregarCollector(int* dir){
            nuevoCollector.Insertar(dir);
        };
        void imprimirCollector(){
            nuevoCollector.imprimir();
        };
};
#include <iostream>
#include <cstdlib>
#include "linkedList.h"

using namespace std;

lista::lista(){
    primero = NULL;
    actual = NULL;
    temp = NULL;
}

void lista::Insertar(int nuevoNum){
    ptrNode puntero = new nodo;
    puntero -> siguiente = NULL;
    puntero -> num;

    if(primero != NULL){
        actual = primero;
        while(actual -> siguiente != NULL){
            actual = actual -> siguiente;
        }
        actual -> siguiente = puntero;
    }
    else{
        primero = puntero;
    }
}
void lista::Eliminar(int delNum){
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
}
void lista::ImprimirLista(){
    actual = primero;
    cout << "[" << endl;
    while(actual != NULL){
        cout << actual -> num << endl;
        actual = actual -> siguiente;
    }
    cout << "]" << endl;
}
#include <cstdlib>
#include <iostream>
#include "linkedList.h"

using namespace std;

int main(){
    lista lista;

    lista.Insertar(3);
    lista.Insertar(5);
    lista.Insertar(7);

    lista.ImprimirLista();

    return 0;
}
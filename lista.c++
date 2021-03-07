#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
    int node;
    struct nodo *next;
};

typedef struct nodo *Lista;

void Insertar(Lista &ptrLista, int num){
    Lista nuevaLista;
    nuevaLista = new (struct nodo);
    nuevaLista -> node = num;
    nuevaLista -> next;
}

void Eliminar(Lista &ptrLista, int num){
    Lista elemento, anterior;
    elemento = ptrLista;

}
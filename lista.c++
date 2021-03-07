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
    cout << nuevaLista;
}

void Eliminar(Lista &ptrLista, int num){
    Lista elemento, anterior;
    elemento = ptrLista;

    if (ptrLista != NULL){
        while(elemento != NULL){
            if(ptrLista->node == num){
                if(elemento == ptrLista){
                    ptrLista = ptrLista->next;
                }
                else{
                    anterior->next = elemento->next;
                }
                delete(elemento);
                return;
            }
            anterior = elemento;
            elemento = elemento->next;
        }
    }
    else{
        cout << "La lista se encuentra vacia..." ;

    }
}
int main(){
    int num;
    Lista newList;
    cout << "Ingrese un numero a agregar a la lista...";
    cin >> num;
    Insertar(newList, num);
    return 0;
}
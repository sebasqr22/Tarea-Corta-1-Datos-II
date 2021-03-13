#include <cstdlib>
#include <iostream>
#include "listaEnlazada.cpp"

using namespace std;

listaEnlazada listaUtilizar;

void *operator new(size_t size){
    //cout << "Usar recciclado: " << listaUtilizar.getCollector() << "\n";
    if(listaUtilizar.getCollector() == true){
        cout << "\n" << "---Usando-espacio-reciclado---";
        void *ptr = listaUtilizar.getDir();
        return ptr;
    }
    else{
        void *ptr2 = malloc(size);
        return ptr2;
    }
}

void operator delete(void *ptr){
    listaUtilizar.agregarCollector((int*) ptr);

}

int main(){
    while(true){
        int num;
        cout << "\n" << "Por favor seleccione una opcion: \n" << "1. Agregar un numero a la lista\n" 
            << "2. Eliminar numero de la lista\n" << "3. Imprimir Collector\n" << "4. Imprimir Lista Enlazada\n" << "5. Salir\n";
        cout << "Opcion: ";
        cin >> num;
        switch (num){
            case 1:
                int nuevoNum;
                cout << "\n" << "Ingrese un numero a agregar a la lista: ";
                cin >> nuevoNum;
                cout << endl;
                listaUtilizar.Agregar(nuevoNum);
                listaUtilizar.ImprimirLista();
                break;

            case 2:
                int delNum;
                cout << "\n" << "Ingrese el numero a borrar: ";
                cin >> delNum;
                cout << endl;
                listaUtilizar.Eliminar(delNum);
                listaUtilizar.ImprimirLista();
                break;

            case 3:
                listaUtilizar.imprimirCollector();
                break;

            case 4:
                listaUtilizar.ImprimirLista();
                break;
            
            case 5:
                cout << "\n" << "Gracias por usar el progama :)";
                exit(1);

            default:
                cout << "\n" << "Por favor seleccione alguna opcion existente...\n";
        }
    }
}
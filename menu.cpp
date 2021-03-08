#include <cstdlib>
#include <iostream>
#include "listaEnlazada.cpp"

using namespace std;

class menuInicio{
    private:
        listaEnlazada listaUtilizar;
    public:
        menuInicio(){};
        void iniciarMenu(){
            int num;
            cout << "Por favor seleccione una opcion: \n" << "1. Agregar un numero a la lista\n" << "2. ELiminar numero de la lista\n" << "3. Salir\n";
            cout << "Opcion: ";
            cin >> num;
            if(num == 1){
                int nuevoNum;
                cout << "\n" << "Ingrese un numero a agregar a la lista: ";
                cin >> nuevoNum;
                cout << endl;
                listaUtilizar.Insertar(nuevoNum);
                listaUtilizar.ImprimirLista();
                return;
            }
            else if (num == 2){

            }
            else{

            }
        };
};
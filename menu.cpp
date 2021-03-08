#include <cstdlib>
#include <iostream>
#include "listaEnlazada.cpp"
#include "collector.cpp"

using namespace std;

class menuInicio{
    private:
        listaEnlazada listaUtilizar;
        collector newCollector;
    public:
        menuInicio(){};
        void iniciarMenu(){
            while(true){
                int num;
                cout << "\n" << "Por favor seleccione una opcion: \n" << "1. Agregar un numero a la lista\n" 
                    << "2. ELiminar numero de la lista\n" << "3. Salir\n";
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
                        cout << "\n" << "Gracias por usar el progama :)";
                        exit(1);
                    
                    case 4:
                        int agregar;
                        cout << "\n" << "Valor a agregar a collector: ";
                        cin >> agregar;
                        cout << "\n";
                        newCollector.Insertar(agregar);
                        break;

                    case 5:
                        int del;
                        cout << "\n" << "Valor a eliminar a collector: ";
                        cin >> del;
                        cout << "\n";
                        newCollector.Eliminar(del);
                        break;

                    default:
                        cout << "\n" << "Por favor seleccione alguna opcion existente...\n";
                }
            }
        };
};
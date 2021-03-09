#include <iostream>
#include <cstdlib>

using namespace std;

class collector{
    private:
        int* arr[10];
        int sizeArray;

    public:
        collector(){
            sizeArray = 0;
        };
        void Insertar(int* direccion){
            arr[sizeArray] = direccion;
            sizeArray ++;
            cout << "---" << endl;
            for(int i=0; i<sizeArray; i++){
                cout << arr[i] << endl;
            }
            cout << "---" << endl;
        };
        void Eliminar(int* direccion){
            for(int i = 0; i < sizeArray; i++){
                if(arr[i] == direccion){
                    arr[i] = NULL;
                    break;
                }
            }
            cout << "---" << endl;
            for(int i=0; i < sizeArray; i++){
                cout << arr[i] << endl;
            }
            cout << "---" << endl;
        };
        bool Validar(){};

        int getEspacio(){};
};
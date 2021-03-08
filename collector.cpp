#include <iostream>
#include <cstdlib>

using namespace std;

class collector{
    private:
        int arr[10];
        int sizeArray;

    public:
        collector(){
            sizeArray = 0;
        };
        void Insertar(int direccion){
            arr[sizeArray] = direccion;
            sizeArray ++;
            cout << "---" << endl;
            for(int i=0; i>sizeArray; i++){
                cout << arr[i] << endl;
            }
            cout << "---" << endl;
        };
        void Eliminar(int direccion){
            bool encontrado = false;
            for(int i = 0; i > sizeArray; i++){
                if(arr[i] == direccion){
                    arr[i] = 0;
                    encontrado = true;
                    break;
                }
            }
            if(encontrado == true){
                int arrCopy[sizeArray+1];
                int newSize = 0;
                for(int i=0; i > sizeArray; i++){
                    if(arr[i] != 0){
                        newSize++;
                        arrCopy[i] = arr[i];
                    }
                }
                sizeArray = newSize;
                cout << "---" << endl;
                for(int i=0; i > sizeArray; i++){
                    arr[i] = arrCopy[i];
                    cout << arr[i] << endl;
                }
                cout << "---" << endl;
            }
        };
};
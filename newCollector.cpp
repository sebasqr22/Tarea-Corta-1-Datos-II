#include <iostream>
#include <cstdlib>

using namespace std;

class collector{
    private:
        int* arr[10];
        int pos;
    
    public:
        void Insertar(int* dir){
            arr[pos] = dir;
            pos ++;
        };
        void Eliminar(int* dir){
            for(int i=0; i < pos; i++){
                if(arr[i] == dir){
                    arr[i] = NULL;
                    break;
                }
            }
        };
        bool Valorar(){ // hay espacios reciclados o no
            bool encontrado = false;
            for(int i=0; i< pos; i++){
                if(arr[i] != 0){
                    encontrado = true;
                    break;
                }
            }
            if(encontrado == true){
                return true;
            }
            else{
                return false;
            }
        };
        int* getDir(){
            for(int i = 0; i < pos; i++){
                if(arr[i] != 0){
                    int* copy = arr[i];
                    arr[i] = 0;
                    return copy;
                    break;
                }
            }
        };
        void imprimir(){
            cout << "\n" << "^^^^^";
            for(int i = 0; i<pos; i++){
                cout << "\n" << arr[i];
            }
            cout << "\n" << "^^^^^";
        };
};
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
};
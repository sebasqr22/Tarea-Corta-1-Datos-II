#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int num = 4;
    int *ptr = &num;
    int* arr[10];
    arr[1] = ptr;
    cout << "El puntero es: " << arr[1];
    return 0;
}
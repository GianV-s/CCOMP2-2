#include <iostream>
#include <array>

using namespace std;

/*void dup(int arr[], int tam){
    for (int i = 0; i < tam; i++){
        arr[i] *= 2;
    }
}

void printArray(const int arr[],const int tam){
    cout << "[";
    for (int i = 0; i < tam; i++){
        cout << " " << arr[i];
    }
    cout << "]" << endl;
}*/

void dup(array<int, 9> arr){
    for(int &i : arr){
        i *= 2;
    }
}

void elpri(array<int, 9> arr){
    cout << "[";
    for (int &i : arr){
        cout << &i;
    }
    cout << "]" << endl;
}

int main (){
    int array[] = {1,2,3,4,5,6}; //en bytes int = 4 se suman y se dividen pa ver cuantos hay p
    cout << sizeof(array) << endl;
    cout << sizeof(array[0]) << endl;
    int tam = sizeof(array) / sizeof (array[0]);
    dup(array, tam);
    printArray(array, tam);
}


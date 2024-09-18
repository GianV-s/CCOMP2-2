#include <iostream>
#include <iomanip>

using namespace std;
//1,3,5,7,9
int main(){
    int n{0};
    int i{3};
    cout << "Ingrese un numero entero: ";
        cin >> n;
    if(n % 2 == 0){
        cout << 1;
        while (i < n){
            cout << "," << i;
            i += 2;
        }
    }
    else{
        cout << 1;
        while (i < n){
            cout << "," << i;
            i += 2;
        }
    }
}



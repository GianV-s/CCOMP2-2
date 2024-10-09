#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int total{0};
    for (int i{1}; i < 1000000; i *= 5){
        total += i;
    }
    for (int i{1}; i < 1000000; i *= 3){
        total += i;
    }    
    cout << "La suma es: " << total << endl;

}

//suma de los nesimos progesion geometrica
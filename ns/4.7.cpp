#include <iostream>
using namespace std;

int main (){
    unsigned int x, y, i{1}, power{1};
    cout << "x: ";
    cin >> x;
    cout << "\ny: ";
    cin >> y;
    power *= x;

    while (i <= y){
        power *= x;
        ++i;
    }

    cout << power;
}
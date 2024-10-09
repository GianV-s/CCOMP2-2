#include <iostream>

using namespace std;

void cubino(int*);

int main (){
    int number{5};
    
    cout << "The original value of number is " << number;
    cubino(&number);
    cout << "\nThe new value of number is " << number << endl;  
    return 0;
}

void cubino(int* nPrt){
    *nPrt = *nPrt * *nPrt * *nPrt;
}
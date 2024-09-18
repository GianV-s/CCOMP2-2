#include <iostream>

bool isPrimo(int num){
    if (num % 2 == 0 && num != 2)
    return false;
    for (int i{3}; i < 29; i++){
        if (num % i == 0)
        return false;
    }
}

int main(){
    std::cout << isPrimo(3);
}
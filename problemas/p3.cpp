#include <iostream>

bool isPrimo(int num){
    if (num % 2 == 0 && num != 2)
    return false;
    for (int i{3}; i < num; i++){
        if (num % i == 0)
        return false;
    }
    return true;
}

int main(){
    long long int num;
    num = 600851475143;//600851475143
    int f;
    for(int i{2}; i <= 10000; i++){
        if(isPrimo(i) && num % i == 0){
        f = i;
        std::cout << f << std::endl;
        }
    }
}
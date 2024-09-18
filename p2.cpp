#include <iostream>

int main(){
    long sum;
    int a,b,c;
    while (b < 4000000){
        c = a+b;
        a = b;
        b = c;
        if (b % 2 == 0) 
        sum += b;
    }
    std::cout << sum;
}
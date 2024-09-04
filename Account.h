#include <iostream>
#include <string>

class Account
{
public:
    explicit Account (std::string accountName)
        :name{accountName}{
        }
    void setName (std::string accountName){
        name = accountName;
    }
    void deposit(int dAmount){
        if (dAmount > 0){
            balance = balance + dAmount;
        }
    }
    void withdraw(int wAmount){
        if (wAmount >= balance){
            balance = balance - wAmount;
        }
    }
    std::string getName() const{
        return name;
    }
    
private:
    std::string name;
    int balance;
};

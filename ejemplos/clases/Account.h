#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
    explicit Account (std::string accountName, int iBalance)
        :name{accountName}{
            if (iBalance >= 0){
                balance = iBalance;
            }
        }
    void setName (){
        cout << "\ningrese el nombre: ";
        string accountName;
        getline(cin, accountName);
        if (accountName != ""){
            name = accountName;
        }
    }
    void deposit(){
        cout << "\ningrese el deposito: ";
        int dAmount;
        cin >> dAmount;
        if (dAmount > 0){
            balance = balance + dAmount;
        }
    }
    void withdraw(){
        cout << "ingrese el retiro: ";
        int wAmount;
        cin >> wAmount;
        if (wAmount <= balance){
            balance = balance - wAmount;
        }
        else{
            balance = 0;
            cout << "\nWithdrawal amount exceeded account balance.\n";
        }
    }
    std::string getName() const{
        return name;
    }
    int getBalance() const{
        return balance;
    }
    
private:
    std::string name;
    int balance;
};

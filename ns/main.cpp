#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"Jane Red", -1};
    //cuenta1
    cout << "CUENTA 1 ---------------------------";
    cout << " \nNombre: " << account1.getName();
    cout << "\nBalance: " << account1.getBalance() << endl;
    
    account1.setName();
    account1.deposit();

    cout << "\nNombre: " << account1.getName();
    cout << "\nBalance: " << account1.getBalance();
    
    //cuenta2
    cout << "\nCUENTA 2 ---------------------------";
    cout << "\nNombre: " << account2.getName();
    cout << "\nBalance: " << account2.getBalance();
    
    account2.setName();
    account2.deposit();

    cout << "\nNombre: " << account2.getName();
    cout << "\nBalance: " << account2.getBalance();

    return 0;
}
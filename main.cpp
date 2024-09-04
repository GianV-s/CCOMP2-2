#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"Jane Red", -1};
    //cuenta1
    cout << "Nombre: " << account1.getName();
    cout << "Balance: " << account1.getBalance();
    
    account1.setName();
    account1.deposit();

    cout << "Nombre: " << account1.getName();
    cout << "Balance: " << account1.getBalance();
    //cuenta2
    cout << "Nombre: " << account2.getName();
    cout << "Balance: " << account2.getBalance();
    
    account2.setName();
    account2.deposit();

    cout << "Nombre: " << account2.getName();
    cout << "Balance: " << account2.getBalance();

    return 0;
}
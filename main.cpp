#include <iostream>
#include <string>
#include <Account.h>



int main() {
    Account account1{"Jane Green"};
    std::cout << "nombre: " << account1.getName();

    std::cout << "\n ingresar nombre: " ;
    std::string name;
    std::getline(std::cin, name);
    account1.setName(name);
    std::cout << "nombre: " << account1.getName();

    Account account2{"Jane Red"};
    std::cout << "nombre: " << account2.getName();

    std::cout << "\n ingresar nombre: " ;
    std::string name;
    std::getline(std::cin, name);
    account2.setName(name);
    std::cout << "nombre: " << account2.getName();

    return 0;
}
/*Modify the payroll system of Figs. 12.9–12.17 to include
- private data member birthDate in class Employee.Use class Date from Figs. 10.6–10.7 to represent an employee’s birthday. LITO
- Assume that payroll is processed once per month. Create a vector of Employee pointers to store the various employee objects. LITO
- In a loop, calculate the payroll for each Employee (polymorphically),and add a $100.00 bonus to the person’s payroll amount 
if the current month is the month in which the Employee’s birthday occurs. */

#include <iostream>
#include <iomanip>
#include <vector>
#include "Date.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const);
void virtualViaReference(const Employee&);
void payroll(const Employee* const);

int main() {
    cout << fixed << setprecision(2); 

    SalariedEmployee salariedEmployee{
            "John", "Smith", "111-11-1111",Date(1995,3,15), 800};
    CommissionEmployee commissionEmployee{
            "Sue", "Jones", "333-33-3333",Date(2000,8,22), 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee{
            "Bob", "Lewis", "444-44-4444",Date(1993,11,07), 5000, .04, 300};
    
    vector<Employee *> employees{&salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee};

    for(const Employee* ptr : employees) {
        payroll(ptr);
    }
}

void payroll(const Employee* const ptr){
    cout << ptr ->getFirstName() << " " << ptr->getLastName() << endl; 
    for (int i = 1; i <= 12; i++){
        if (i == ptr -> getBDate().getMonth()){ 
            cout << "/ " << i << " / " << ptr ->earnings() + 100 << " BONO :D" << endl; // bonosss
            continue;
        } 
        cout << "/ " << i << " / " << ptr ->earnings() << endl;
    }
}

void virtualViaPointer(const Employee* const baseClassPtr){
    cout << baseClassPtr->toString()
        << "\nearned  $ " << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee& baseClassRef) {
    cout << baseClassRef.toString()
        << "\nearned $ " << baseClassRef.earnings() << "\n\n";
}


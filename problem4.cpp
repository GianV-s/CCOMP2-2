#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;
//1,3,5,7,9
int main(){
    Date date1(5, 5,2020);
    Date date2(13,5,2020);
    date1.displayDate();
    date2.displayDate(),
    
    cout << "fecha1" << endl;
    cout << "mes: " << date1.getMonth();
    cout << "\ndia: " << date1.getDay();
    cout << "\naño: " << date1.getYear();
    
    cout << "fecha2" << endl;
    cout << "mes: " << date2.getMonth();
    cout << "\ndia: " << date2.getDay();
    cout << "\naño: " << date2.getYear();
    
}

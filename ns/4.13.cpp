#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    unsigned int lt, tkm, tlt;
    int km;

    while (km != -1){
        cout << "Enter kilometers driven (-1 to quit): " << endl;
            cin >> km;
        cout << "Enter liters used: " << endl;
            cin >> lt;
        tkm += km; tlt += lt;

        cout << setprecision(6) << fixed;

        cout << "Kms per liter this trip: " << km / lt << endl;
        cout << "Total kms per liter: " << tkm / tlt << endl;
        
    }
}
/*
set fuel as 0
set km as 0
set liters as 0
set a total of km
set a total of liters

while km is not -1
    prompt the user to enter -1 or km
    prompt the user to enter liters
    print km divided by liters
    print total of km divided by liters
end while
*/
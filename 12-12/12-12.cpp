#include <iostream>
#include <vector>
#include <string>
#include "Package.h"
#include "OPackage.h"
#include "2DPackage.h"


using namespace std;


void PrintCost(Package* ptr){
    cout << ptr->calculateCost() << endl;
}
double getCost(Package* ptr){
    return ptr->calculateCost();
}

int main(){

    string first = "JUAN chavez";

OPackage paquete1 {first,string( "Cayma,123"), string("Arequipa"),string( "Arequipa"), 40404, 40505, 50.0, 0.23, 0.30};
tupacPackage paquete2 {first,string( "Cayma,123"), string("Arequipa"),string( "Arequipa"), 40404, 40505, 50.0, 0.23, 0.30};
OPackage paquete3 {first,string( "Cayma,123"), string("Arequipa"),string( "Arequipa"), 40404, 40505, 50.0, 0.23, 0.30};

vector<Package *> paquetes{&paquete1, &paquete2, &paquete3};
double total = 0;

for(Package* PackagePtr: paquetes){
    PrintCost(PackagePtr);
    total += getCost(PackagePtr);
}

}

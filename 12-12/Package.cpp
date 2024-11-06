#include <sstream>
#include "Package.h"

using namespace std;

Package::Package(const string& n, const string& a, const string& c,
                const string& s, int zs, int zr, double w, double _cpo)
    : name(n), address(a), city(c), state(s), ZIPs(zs), ZIPr(zr)
{
        if(w > 0 && cpo >= 0){
            setWeight(w); setCPO(_cpo);
        }
}

void Package::setWeight(double w){
    this->weight = w;
}
void Package::setCPO(double c){
    this->cpo = c;
}

double Package::calculateCost(){
    return weight * cpo;
}

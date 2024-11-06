#include "Package.h"

Package::Package(const string& n, const string& a, const string& c, const string& s, int zs, int zr, double w, double _cpo)
    : name(n), address{a}, city{c}, state{s}, ZIPs{zs}, ZIPr{zr} {
        if(w > 0 && cpo >= 0){
            weight = w; cpo = _cpo;
        }
}

double Package::calculateCost(){
    return weight * cpo;
}

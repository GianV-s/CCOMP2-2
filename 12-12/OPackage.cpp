#include "OPackage.h"
#include <sstream>

OPackage::OPackage(const string& n, const string& a, const string& c, const string& s, int zs, int zr, double w, double _cpo, double flat)
    : Package(n, a, c, s, zs, zr, w, _cpo){
        if (flat >= 0)
            setFlatFee(flat);
        (flat >= 0) ? setFlatFee(flat):throw("mayor q sero ");
}

void OPackage::setFlatFee(double fee)
{
    addFeePO = fee;
}

double OPackage::calculateCost() 
{
    return addFeePO + Package::calculateCost();
}

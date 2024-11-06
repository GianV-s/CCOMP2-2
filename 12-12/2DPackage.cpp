#include "2DPackage.h"

tupacPackage::tupacPackage(const string& n, const string& a, const string& c, const string& s, int zs, int zr, double w, double _cpo, double flat)
    : Package(n, a, c, s, zs, zr, w, _cpo){
        (flat >= 0) ? setFlatFee(flat):throw("mayor q sero ");
}

void tupacPackage::setFlatFee(double flat)
{
    flatFee = flat;
}

double tupacPackage::calculateCost()
{
    return flatFee + Package::calculateCost();
}

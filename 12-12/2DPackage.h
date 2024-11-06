#include "Package.h"
using namespace std;

class tupacPackage : public Package{
public:
    tupacPackage(const string&, const string&, const string&, const string&, int, int, double, double, double);
    void setFlatFee(double);
    virtual double calculateCost();
    
private:
    double flatFee;
};
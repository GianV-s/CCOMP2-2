#include "Package.h"
using namespace std;


class OPackage : public Package{
    public:
        OPackage(const string&, const string&, const string&,
         const string&, int, int, double, double, double);
        
        void setFlatFee(double);
        
        virtual double calculateCost() ;

    private:
        double addFeePO;
};
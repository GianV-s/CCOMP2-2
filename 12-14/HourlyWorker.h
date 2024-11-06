/*Class HourlyWorker should contain private data members wage (to store the employee’s wage per hour) and hours (to store the
hours worked). 
*/


#include "SalariedEmployee.h"

class HourlyWorker : public SalariedEmployee{
public:
    HourlyWorker(const std::string&, const std::string&,
            const std::string&, const Date, double = 0.0, int);
    virtual ~HourlyWorker() = default;

    void setWage(int);
    double getWage() const;

    virtual double earnings() const override;
    virtual std::string toString() const override;
private:
    unsigned int wage;
    unsigned int hours;
};
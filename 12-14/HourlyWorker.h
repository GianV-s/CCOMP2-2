/*Class HourlyWorker should contain private data members wage (to store the employee’s wage per hour) and hours (to store the
hours worked). 
*/


#include "Employee.h"

class HourlyWorker : public Employee{
public:
    HourlyWorker(const std::string&, const std::string&,
            const std::string&, const Date, double = 0.0, int = 0);
    virtual ~HourlyWorker() = default;

    void setWage(double);
    double getWage() const;

    void setHours(int);
    int getHours() const;

    virtual double earnings() const override;
    virtual std::string toString() const override;
private:
    unsigned int wage;
    unsigned int hours;
};
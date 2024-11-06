#include "HourlyWorker.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>
using namespace std;

HourlyWorker::HourlyWorker(const std::string & firs, const std::string & last, const std::string & number, const Date bdate, double wage, int hours)
    : Employee(firs, last, number, bdate)
{

}

void HourlyWorker::setWage(double w){
    this->wage = w;
}
double HourlyWorker::getWage() const
{
    return wage;
}
void HourlyWorker::setHours(int h)
{
    if(h >= 0)
    this->hours = h;
}
int HourlyWorker::getHours() const{
    return hours;
}

double HourlyWorker::earnings() const
{
    if (this->getHours() <= 40){
        return wage*hours;
    }
    else {
        return (((this->getHours() - 40) * 1.5 * wage) + (this->getHours() * wage * 40));
    }
}

string HourlyWorker::toString() const
{
    ostringstream output;
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Hourly Worker: "
    << Employee::toString()
    << "\nWage: " << getWage()
    << "\nHours: " << getHours()
    << "\nPay: " << earnings();
    return output.str();
}

#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string& first,
        const string& last, const string& ssn, const Date bdate, double salary)
    : SalariedEmployee(){
}

void HourlyWorker::setWage(int)
{
}

double HourlyWorker::getWage() const
{
    return 0.0;
}

double HourlyWorker::earnings() const
{
    return 0.0;
}

std::string HourlyWorker::toString() const
{
    return std::string();
}

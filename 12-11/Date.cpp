#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Date.h"

using namespace std;
Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}

void Date::setDate(int y, int m, int d) {
    if( (y >= 0) && (m >= 0 && m < 12) && (d >= 0 && d < 31)) {
        year = y;
        month = m;
        day = d;
    } else {
        throw invalid_argument("dateMember was out of range");
    }
}

int Date::getYear() const{return year;}
int Date::getMonth() const{return month;}
int Date::getDay() const{return day;}

string Date::toUniversalString() const {
    ostringstream output;
    output << setfill('0') << setw(2) << year << ":"
        << setw(2) << month << ":" << setw(2) << day;
    return output.str();
}
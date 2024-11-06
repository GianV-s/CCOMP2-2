#include <string>

#ifndef DATE_H
#define DATE_H

class Date {
    public: 
        Date(int, int, int);       
        void setDate(int, int, int);
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        std::string toUniversalString() const;
    private:
        unsigned int year{0};
        unsigned int month{0};
        unsigned int day{0};

};
#endif
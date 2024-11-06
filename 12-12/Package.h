#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package{
public:
    Package(const std::string&, const std::string&, const std::string &, const std::string &, int, int, double, double);
    virtual double calculateCost();
    void setWeight(double);
    void setCPO(double);

private:
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    unsigned int ZIPs;
    unsigned int ZIPr;
    double weight;
    double cpo;
};

#endif
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package{
public:
    Package(const string&, const string&, const string&, const string&, int, int, double, double);
    virtual double calculateCost();
private:
    string name;
    string address;
    string city;
    string state;
    unsigned int ZIPs;
    unsigned int ZIPr;
    double weight;
    double cpo;
};

#endif
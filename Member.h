#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>

using namespace std;

class Member {
private:
    string name;
    double asset;

public:
    Member(string, double);
    void setName(string);
    string getName();
    double getAsset();
    void payTax(double);
};

#endif
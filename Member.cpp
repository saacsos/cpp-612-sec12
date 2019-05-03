#include <iostream>
#include "Member.h"

using namespace std;

// :: Scope Resolution Operator
Member::Member(string name, double asset) {
    this->name = name;
    this->asset = asset > 0 ? asset : 0;
}

void Member::setName(string name) {
    this->name = name;
}

string Member::getName() {
    return name;
}

double Member::getAsset() {
    return asset;
}

void Member::payTax(double percent) {
    asset -= percent < 0? 0: percent/100 * asset;
}
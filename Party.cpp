#include <iostream>
#include "Party.h"

using namespace std;

Party::Party(string name) {
    this->name = name;
    size = 0;
}

string Party::getName() {
    return name;
}

void Party::addMember(Member* member) {
    this->members[size++] = member;
}

string Party::listMember() {
    string result = "";
    for (int i = 0; i < size; i++) {
        result += to_string(i+1) + " " + members[i]->getName() + " (" + 
                to_string(members[i]->getAsset()) +
                " baht)\n";
    }
    return result;
}
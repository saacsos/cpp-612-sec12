#include <iostream>
#include "Member.h"

using namespace std;

class Party {
private:
    string name;
    Member** members; 
    int size;

public:
    Party(string);
    string getName();
    void addMember(Member*);
    string listMember();
};
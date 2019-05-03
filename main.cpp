#include <iostream>
#include "Member.h"
#include "Party.h"

using namespace std;

int main() {
    Party p1("Pakpon");
    cout << "Party: " << p1.getName() << endl;

    Member m1("Prayad", 500000);
    Member* m2 = new Member("Pratad", 45555000);

    p1.addMember(&m1);
    p1.addMember(m2);

    cout << p1.listMember() << endl;

}
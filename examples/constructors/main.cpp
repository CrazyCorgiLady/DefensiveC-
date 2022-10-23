#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    try {

        employee emp("1", "Michelle", 100000, "Engineering");
        emp.printData();
    } catch (exception& e) {
        cout << e.what();
    }

    return 0;

}

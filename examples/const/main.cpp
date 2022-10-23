#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    try {
        employee emp("1", "Michelle", 100000, "Engineering");
        emp.printData();
        cout << "Total Salary (Including Bonus) = " << emp.computeTotalSalary(5) << endl;
        cout << "Total Salary + Special Bonus = " << computeSpecialBonus(emp, 5) << endl;
    } catch (exception& e) {
        cout << e.what();
    }

    return 0;

}

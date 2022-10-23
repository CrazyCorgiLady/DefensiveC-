#include <string>
#include <iostream>
#include "contractEmployee.h"

using namespace std;

contractEmployee::contractEmployee(string id, string name,
                                   float salary, float overtimeRate,
                                   float overtimeHours) :
    employee(id, name, salary),
    overtimeRate(overtimeRate), overtimeHours(overtimeHours) {

}

double contractEmployee::computeTotalSalary() const {
    double baseSalary = getSalary();

    return (baseSalary + overtimeRate * overtimeHours);
}

void contractEmployee::printData() const {
    employee::printData();
    cout << "overtime = " << (overtimeRate * overtimeHours) << endl;
}

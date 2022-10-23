#include <string>
#include <iostream>
#include "fullTimeEmployee.h"

using namespace std;

fullTimeEmployee::fullTimeEmployee(string id, string name, float salary, float bonusPercent) :
    employee(id, name, salary), bonusPercent(bonusPercent) {

}

double fullTimeEmployee::computeTotalSalary() const {
    double baseSalary = getSalary();

    return (baseSalary + baseSalary * bonusPercent * 0.01);
}

void fullTimeEmployee::printData() const {
    employee::printData();

    cout << "bonus percent = " << bonusPercent << endl;
}

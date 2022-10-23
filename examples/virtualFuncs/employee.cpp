#include <string>
#include <iostream>
#include "employee.h"

using namespace std;


employee::employee(string id, string name, float salary) :
    id(id), name(name), salary(salary) {

}

void employee::printData() const {
    cout << "id = " << id << " name = " << name
         << " salary = " << salary  << endl;
}

double employee::computeTotalSalary() const {
    return salary;
}


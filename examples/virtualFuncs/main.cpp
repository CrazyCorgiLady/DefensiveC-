#include <iostream>
#include "employee.h"
#include "contractEmployee.h"
#include "fullTimeEmployee.h"

using namespace std;

// if we don't have printData and computeTotalSalary as virtual functions in the base
// class, when this function is invoked it will evaluate employee as the runtime type
// of employee, which will be default be the base class.  They need to be defined
// as virtual so that they can be overridden at runtime
void printEmployeeDetails(employee const& employee) {
    employee.printData();
    cout << "total salary = " << employee.computeTotalSalary() << endl;
}

int main() {

    employee ron("1", "Ron", 100000);
    fullTimeEmployee harry("2", "Harry", 110000, 5);
    contractEmployee hermione("3", "Hermione", 120000, 100, 30);

    //with non-virtual fns these would print fine because at runtime, they are
    //of the right type
    ron.printData();
    cout << "total salary = " << ron.computeTotalSalary() << endl;

    harry.printData();
    cout << "total salary = " << harry.computeTotalSalary() << endl;

    hermione.printData();
    cout << "total salary = " << hermione.computeTotalSalary() << endl;

    cout << "=================================" << endl;

    //with non-virtual fns these would print garbage because the runtime type
    //would be defaulted to the base class employee
    printEmployeeDetails(ron);
    printEmployeeDetails(harry);
    printEmployeeDetails(hermione);

    return 0;

}

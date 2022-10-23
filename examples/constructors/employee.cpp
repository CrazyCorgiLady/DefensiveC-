#include <string>
#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>
#include "employee.h"

using namespace std;

vector<string> departments = {"Engineering", "HR", "Sales"};

employee::employee(string id, string name, float salary, string department) :
    id(id), name(name), salary(salary), department(department) {

    if (salary <= 0) {
        throw invalid_argument("Please specify a positive salary: " + to_string(salary));
    }

    //NOTE: Find(first, last, element we want to find) and returns an iterator
    //      that points to the found element in the specified range.  If not found, it returns
    //      an iterator after the last element.
    if (find(departments.begin(), departments.end(), department) == departments.end()) {
        throw invalid_argument("please specify a valid department: " + department);
    }
}

void employee::printData() {
    cout << "id = " << id << " name = " << name
         << " salary = " << salary << " department = "
         << department << endl;
}

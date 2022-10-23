#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


#include <string>

class employee {
    private :
        std::string id;
        std::string name;
        float       salary;

    public :
        employee(std::string id, std::string name, float salary);

        double getSalary() const {
            return salary;
        }

        //NOTE: use const when you don't want member variables to be updateable
        //NOTE: virtual functions can be overridden in a derived class
        double virtual computeTotalSalary() const;

        void virtual printData() const;
};

#endif

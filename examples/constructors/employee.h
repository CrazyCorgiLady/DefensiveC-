#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


#include <string>

class employee {
    private :
        std::string id;
        std::string name;
        float       salary;
        std::string department;

    public :
        employee(std::string id, std::string name, float salary, std::string department);

        void printData();
};





#endif

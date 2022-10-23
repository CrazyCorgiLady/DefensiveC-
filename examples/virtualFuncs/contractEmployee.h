#ifndef CONTRACT_EMPLOYEE_H_
#define CONTRACT_EMPLOYEE_H_


#include <string>
#include "employee.h"

class contractEmployee : public employee {
    private :
        float overtimeRate;
        float overtimeHours;

    public :
        contractEmployee(std::string id, std::string name,
                         float salary, float overtimeRate,
                         float overtimeHours);

        //NOTE: use const when you don't want member variables to be updateable
        double computeTotalSalary() const;

        void printData() const;
};

#endif

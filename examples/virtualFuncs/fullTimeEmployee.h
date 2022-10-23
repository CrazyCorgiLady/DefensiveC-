#ifndef FULLTIME_EMPLOYEE_H_
#define FULLTIME_EMPLOYEE_H_


#include <string>
#include "employee.h"

class fullTimeEmployee : public employee {
    private :
        float bonusPercent;

    public :
        fullTimeEmployee(std::string id, std::string name,
                         float salary, float bonusPercentage);

        //NOTE: use const when you don't want member variables to be updateable
        double computeTotalSalary() const;

        void printData() const;
};

#endif

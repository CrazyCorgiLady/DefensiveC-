#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


#include <string>

class employee {
    private :
        std::string id;
        std::string name;
        float       salary;
        std::string department;

        //NOTE: friend fns can access the private member variables of that class

        //this reference to const employee is to ensure that this fn doesn't update
        //employee in any way. We only want to be able to access the values.
        friend double computeSpecialBonus(employee const& emp, float regBonusPercent);

    public :
        employee(std::string id, std::string name, float salary, std::string department);

        //NOTE: use const when you don't want member variables to be updateable
        double computeTotalSalary(float bonusPercent) const;

        void printData() const;
};

double computeSpecialBonus(employee const& emp, float regBonusPercent);

#endif

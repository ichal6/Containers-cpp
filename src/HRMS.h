//
// Created by michael on 11/29/20.
//

#ifndef EX2_HRMS_H
#define EX2_HRMS_H


#include <string>
#include <map>
#include <list>
#include "Employee.h"

class HRMS {
private:
    std::map<std::string, Employee> allEmployees;
    std::map<std::string, std::list<std::string> > departmentToEmployees;
    std::map<std::string, double> mapOfSalary;
public:
    void add(Employee employee, std::string departmentId, double salary);
    void printDepartment(std::string departmentId);
    void changeSalary(std::string employeeId, double salary);
    void printSalaries();
    void printSalariesSorted();
private:
    struct Comparator {
        template <typename T>
        bool operator()(const T& l, const T& r) const;
    };
};


#endif //EX2_HRMS_H

//
// Created by michael on 11/29/20.
//

#include "HRMS.h"

void HRMS::printSalaries() {

}

void HRMS::add(Employee employee, std::string departmentId, double salary) {
    allEmployees.push_back(employee);
    if(departmentToEmployees.count(departmentId)){
        departmentToEmployees[departmentId].push_back(employee.getId());
    } else{
        std::list<std::string> employeesInDepartment;
        employeesInDepartment.push_back(employee.getId());
        departmentToEmployees.insert({departmentId, employeesInDepartment});
    }
    mapOfSalary.insert({employee.getId(), salary});
}

void HRMS::printDepartment(std::string departmentId) {

}

void HRMS::changeSalary(std::string employeeId, double salary) {

}

void HRMS::printSalariesSorted() {

}

//
// Created by michael on 11/29/20.
//

#include <set>
#include "HRMS.h"

void HRMS::add(Employee employee, std::string departmentId, double salary) {
    allEmployees.insert({employee.getId(), employee});
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
    if(departmentToEmployees.count(departmentId)){
        std::list<string> listOfEmployeesId = departmentToEmployees[departmentId];
        if(listOfEmployeesId.empty()){
            std::cout << "The list is empty" << std::endl;
        }
        std::cout << "\nList of employees for department " << departmentId;
        std::cout << "\nid\tname\tsurname\tposition" << std::endl;
        for(std::string employeeId: listOfEmployeesId){
            if(allEmployees.count(employeeId)){
                std::cout << allEmployees[employeeId] << std::endl;
            }
        }

    } else{
        std::cout << "Department with this id doesn't exist." << std::endl;
    }
}

void HRMS::changeSalary(std::string employeeId, double salary) {
    if(mapOfSalary.count(employeeId)){
        mapOfSalary[employeeId] = salary;
    }
}

void HRMS::printSalaries() {
    if(mapOfSalary.empty()){
        std::cout << "The list is empty" << std::endl;
    }
    std::cout << "\nList of all employees" << std::endl;
    std::cout << "\nid\tname\tsurname\tposition\tsalary" << std::endl;
    for(auto & singleEntry : allEmployees){
        std::cout << singleEntry.second << " " << mapOfSalary[singleEntry.first] << std::endl;
    }
}

void HRMS::printSalariesSorted() {
    if(mapOfSalary.empty()){
        std::cout << "The list is empty" << std::endl;
    }

    std::set<std::pair<std::string, double>, Comparator> sortMapOfSalary(mapOfSalary.begin(),
                                                                         mapOfSalary.end());
    std::cout << "\nList of all employees sort by salary" << std::endl;
    std::cout << "\nid\tname\tsurname\tposition\tsalary" << std::endl;

    for(auto & singleEntry : sortMapOfSalary){
        std::cout << allEmployees[singleEntry.first] << " " << singleEntry.second << std::endl;
    }
}

template <typename T>
bool HRMS::Comparator::operator()(const T &l, const T &r) const {
    if (l.second != r.second) {
        return l.second > r.second;
    }
    return l.first > r.first;
}

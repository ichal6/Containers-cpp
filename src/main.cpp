#include <iostream>
#include "Employee.h"
#include "HRMS.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Employee employee1("id0", "Michael", "Lechowicz",
                       "dId1", "programmer");
//    std::cout << employee1;

    HRMS hrms;
    hrms.add(employee1, employee1.getDepartmentId(), 2400.67);
    hrms.add(employee1, employee1.getDepartmentId(), 2400.67);
    hrms.printDepartment("dId1");
    hrms.changeSalary(employee1.getId() ,100);
    hrms.printSalaries();


    return 0;
}

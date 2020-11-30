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

    return 0;
}

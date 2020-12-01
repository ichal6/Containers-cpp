#include <iostream>
#include "Employee.h"
#include "HRMS.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Employee employee1("id0", "Michael", "Lechowicz",
                       "dId1", "programmer");
    Employee employee2("id1", "Pavlus", "Chudzik",
                       "dId1", "programmer");
    Employee employee3("id2", "Alicja", "Cichon",
                       "dId1", "programmer");

    HRMS hrms;
    hrms.add(employee1, employee1.getDepartmentId(), 2400.67);
    hrms.add(employee2, employee2.getDepartmentId(), 3000.67);
    hrms.add(employee3, employee3.getDepartmentId(), 234.74);
    hrms.printDepartment("dId1");
//    hrms.changeSalary(employee1.getId() ,100);
    hrms.printSalariesSorted();


    return 0;
}

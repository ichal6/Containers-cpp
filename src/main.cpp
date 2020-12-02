#include <iostream>
#include "Employee.h"
#include "HRMS.h"

int main() {
    Employee employee1("id0", "Michael", "Lechowicz",
                       "dId1", "programmer");
    Employee employee2("id1", "Pavlus", "Chudzik",
                       "dId1", "programmer");
    Employee employee3("id2", "Alicja", "Cichon",
                       "dId1", "programmer");
    Employee employee4("id3", "Maria", "Nalepa",
                       "dId2", "programmer");
    Employee employee5("id4", "Lukas", "Tomecki",
                       "dId2", "programmer");
    Employee employee6("id5", "Karolina", "Budzik",
                       "dId2", "programmer");
    Employee employee7("id6", "Tomasz", "Bortacki",
                       "dId3", "programmer");
    Employee employee8("id7", "Robert", "Staszczak",
                       "dId3", "programmer");
    Employee employee9("id8", "Renata", "Witkowska",
                       "dId3", "programmer");
    Employee employee10("id9", "Aleksandra", "Rajzer",
                       "dId3", "programmer");

    HRMS hrms;
    hrms.add(employee1, employee1.getDepartmentId(), 2400.67);
    hrms.add(employee2, employee2.getDepartmentId(), 3000.67);
    hrms.add(employee3, employee3.getDepartmentId(), 234.74);
    hrms.add(employee4, employee4.getDepartmentId(), 4000.50);
    hrms.add(employee5, employee5.getDepartmentId(), 3500.45);
    hrms.add(employee6, employee6.getDepartmentId(), 2300.74);
    hrms.add(employee7, employee7.getDepartmentId(), 880.74);
    hrms.add(employee8, employee8.getDepartmentId(), 99.99);
    hrms.add(employee9, employee9.getDepartmentId(), 404.50);
    hrms.add(employee10, employee10.getDepartmentId(), 500.00);


    hrms.printDepartment("dId1");
    hrms.printDepartment("dId2");
    hrms.printDepartment("dId3");

    hrms.printSalaries();
    hrms.printSalariesSorted();

    std::cout << "\nChange salary for 'id8'" << std::endl;
    hrms.changeSalary("id8", 9999.99);
    hrms.printSalariesSorted();

    return 0;
}

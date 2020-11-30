#include <iostream>
#include "Employee.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Employee employee1("id0", "Michael", "Lechowicz",
                       "dId1", "programmer");
    std::cout << employee1;

    return 0;
}

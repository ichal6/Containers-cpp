//
// Created by michael on 11/29/20.
//

#include "Employee.h"

const string &Employee::getId() const {
    return id;
}

void Employee::setId(const string &id) {
    Employee::id = id;
}

const string &Employee::getName() const {
    return name;
}

void Employee::setName(const string &name) {
    Employee::name = name;
}

const string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const string &surname) {
    Employee::surname = surname;
}

const string &Employee::getDepartmentId() const {
    return departmentId;
}

void Employee::setDepartmentId(const string &departmentId) {
    Employee::departmentId = departmentId;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

Employee::Employee(const string &id,
                   const string &name,
                   const string &surname,
                   const string &departmentId,
                   const string &position)
                   : id(id),
                   name(name),
                   surname(surname),
                   departmentId(departmentId),
                   position(position)
                   { }


Employee::Employee() {

}

std::ostream &operator<<(ostream &strm, Employee employee) {
    return strm << employee.id << " " << employee.name << " " << employee.surname
    << " " << employee.position;
}



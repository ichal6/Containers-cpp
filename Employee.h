//
// Created by michael on 11/29/20.
//

#ifndef EX2_EMPLOYEE_H
#define EX2_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
private:
    string id;
    string name;
    string surname;
    string departmentId;
    string position;

public:
    Employee(const string &id,
             const string &name,
             const string &surname,
             const string &departmentId,
             const string &position);

public:
    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getDepartmentId() const;

    void setDepartmentId(const string &departmentId);

    const string &getPosition() const;

    void setPosition(const string &position);
};


#endif //EX2_EMPLOYEE_H

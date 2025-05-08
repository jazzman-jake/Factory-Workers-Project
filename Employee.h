#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string employeeNumber;
    string hireDate;

public:
    // Constructors
    Employee(string name = "", string employeeNumber = "", string hireDate = "")
        : name(name), employeeNumber(employeeNumber), hireDate(hireDate) {}

    // Accessor functions
    string getName() const { return name; }
    string getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Mutator functions
    void setName(const string& name) { this->name = name; }
    void setEmployeeNumber(const string& employeeNumber) { this->employeeNumber = employeeNumber; }
    void setHireDate(const string& hireDate) { this->hireDate = hireDate; }

    // Print employee details
    void printEmployee() const {
        cout << "Name: " << name << "\n"
            << "Employee Number: " << employeeNumber << "\n"
            << "Hire Date: " << hireDate << "\n";
    }
};

#endif // EMPLOYEE_H


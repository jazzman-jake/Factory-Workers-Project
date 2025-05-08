#pragma once

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Constructor using initializer list
    ShiftSupervisor(string name = "", string employeeNumber = "", string hireDate = "",
        double annualSalary = 0.0, double annualBonus = 0.0)
        : Employee(name, employeeNumber, hireDate), annualSalary(annualSalary), annualBonus(annualBonus) {}

    // Accessor functions
    double getAnnualSalary() const { return annualSalary; }
    double getAnnualBonus() const { return annualBonus; }

    // Mutator functions
    void setAnnualSalary(double annualSalary) { this->annualSalary = annualSalary; }
    void setAnnualBonus(double annualBonus) { this->annualBonus = annualBonus; }

    // Print Shift Supervisor details
    void printShiftSupervisor() const {
        printEmployee();
        cout << "Annual Salary: $" << annualSalary << "\n"
            << "Annual Bonus: $" << annualBonus << "\n";
    }
};

#endif // SHIFTSUPERVISOR_H


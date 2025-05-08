#pragma once

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift; // 1 for day, 2 for night
    double hourlyPayRate;

public:
    // Constructor using initializer list
    ProductionWorker(string name = "", string employeeNumber = "", string hireDate = "",
        int shift = 1, double hourlyPayRate = 0.0)
        : Employee(name, employeeNumber, hireDate), shift(shift), hourlyPayRate(hourlyPayRate) {}

    // Accessor functions
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutator functions
    void setShift(int shift) { this->shift = shift; }
    void setHourlyPayRate(double hourlyPayRate) { this->hourlyPayRate = hourlyPayRate; }

    // Print Production Worker details
    void printProductionWorker() const {
        printEmployee();
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << "\n"
            << "Hourly Pay Rate: $" << hourlyPayRate << "\n";
    }
};

#endif // PRODUCTIONWORKER_H


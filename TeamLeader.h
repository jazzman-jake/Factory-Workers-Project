#pragma once

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // Constructor using initializer list
    TeamLeader(std::string name = "", std::string employeeNumber = "", std::string hireDate = "",
        int shift = 1, double hourlyPayRate = 0.0, double monthlyBonus = 0.0,
        int requiredTrainingHours = 0, int attendedTrainingHours = 0)
        : ProductionWorker(name, employeeNumber, hireDate, shift, hourlyPayRate),
        monthlyBonus(monthlyBonus), requiredTrainingHours(requiredTrainingHours),
        attendedTrainingHours(attendedTrainingHours) {}

    // Accessor functions
    double getMonthlyBonus() const { return monthlyBonus; }
    int getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    // Mutator functions
    void setMonthlyBonus(double monthlyBonus) { this->monthlyBonus = monthlyBonus; }
    void setRequiredTrainingHours(int requiredTrainingHours) { this->requiredTrainingHours = requiredTrainingHours; }
    void setAttendedTrainingHours(int attendedTrainingHours) { this->attendedTrainingHours = attendedTrainingHours; }

    // Print Team Leader details
    void printTeamLeader() const {
        printProductionWorker();
        std::cout << "Monthly Bonus: $" << monthlyBonus << "\n"
            << "Required Training Hours: " << requiredTrainingHours << "\n"
            << "Attended Training Hours: " << attendedTrainingHours << "\n";
    }
};

#endif // TEAMLEADER_H



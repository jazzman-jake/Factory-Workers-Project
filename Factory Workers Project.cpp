#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main() {
    // Test Employee class
    Employee emp1("John Doe", "E12345", "2023-01-01");
    emp1.printEmployee();

    // Test ProductionWorker class
    ProductionWorker pw1("Jane Smith", "P67890", "2023-02-01", 1, 15.50);
    pw1.printProductionWorker();

    // Test ShiftSupervisor class
    ShiftSupervisor ss1("Alice Johnson", "S11111", "2020-04-15", 60000.0, 5000.0);
    ss1.printShiftSupervisor();

    // Test TeamLeader class
    TeamLeader tl1("Bob Brown", "T22222", "2019-05-20", 2, 20.00, 1500.0, 40, 35);
    tl1.printTeamLeader();

    return 0;
}

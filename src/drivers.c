//
// Created by nico on 10/19/24.
//

#include "drivers.h"

void initialize_drivers(Driver driver[]) {
    strcpy(drivers[0].name, "Max Verstappen");
    strcpy(drivers[0].team, "Red Bull");
    drivers[0].car_number = 1;
    drivers[0].skill_factor = 1.2;  // Facteur Red Bull

    strcpy(drivers[1].name, "Lewis Hamilton");
    strcpy(drivers[1].team, "Mercedes");
    drivers[1].car_number = 44;
    drivers[1].skill_factor = 1.1;  // Facteur Mercedes
    // ...
}
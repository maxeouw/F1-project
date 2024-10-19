#include <stdio.h>

#include "F1_championship.h"
#include "drivers.h"
#include "sessions.h"
#include "results.h"
#include "display.h"

int main() {
    // Initialisation des pilotes
    Drivers drivers[20];
    initialize_drivers(drivers);

    // Demarrer un weekend
    Session Practice, Qualifying, Race;

    printf("Starting Practice...\n");
    run_session(&Practice, "Practice", drivers, 20);
    display_results(&practice);

    // Attendre que l'utilisateur enfonce une touche.
    printf("Press any key to continue...");
    getchar();

    printf("Starting Qualifying ...\n");
    run_session(&Qualifying, "Qualifying", drivers, 20);
    display_results(&Qualifying);

    printf("Press any key to continue...");
    getchar();

    printf("Starting Race...\n");
    run_session(&Race, "Race", drivers, 20);
    display_results(&Race);

    // Sauvegarder les resultats dans un CSV
    save_results_to_csv("Race_results.csv", &Race);

    return 0;
}









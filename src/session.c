//
// Created by nico on 10/19/24.
//

#include <math.h>

#include "sessions.h"
#include <stdlib.h>
#include <string.h>

void run_session(Session* session, const char* session_type, Driver driver[], int num_drivers) {
    strcpy(session->session_type, session_type);
    session->num_drivers = num_drivers;

    // Simuler la session
    for (int i = 0; i < num_drivers; i++) {
        session->results[i] = i // Index pilotes
        float random_factor = (float) rand() / RAND_MAX;
        session->results[i] += (1.0 - driver[i].skill_factor) * random_factor;
    }

    // Tri des resultats : a faire plus tard
}

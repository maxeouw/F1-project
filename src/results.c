//
// Created by nico on 10/19/24.
//

#include "results.h"
#include <stdio.h>

void save_results_to_csv(const char* filename, Session* session) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        printf("Error opening file\n");
        return;
    }

    fprintf(file, "Position,Driver\n");
    for (int i = 0; i < session->num_drivers; i++) {
        fprintf(file, "%d,%d\n", i + 1, session->results[i]);
    }

    fclose(file)
}
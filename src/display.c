//
// Created by nico on 10/19/24.
//

#include "display.h"
#include <stdio.h>

void display_results(Session* session) {
    printf("Results for %s:\n", session->session_type);
    for (int i = 0; i < session->num_drivers; i++) {
        printf("%d: Driver %d\n", i + 1, session->result[i]);
    }
}
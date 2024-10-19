//
// Created by nico on 10/19/24.
//

#ifndef SESSIONS_H
#define SESSIONS_H

#endif //SESSIONS_H

typedef struct {
  Driver drivers[20]; // Liste des pilotes pour la sessions
  int num_drivers;    // Nombre de pilotes participant
  char session_type[20]; // Practice, Quali., Race ...
  int results[20];
} Session;
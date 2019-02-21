#ifndef BASE_H
#define BASE_H

#include "atelier.h"
#include "clients.h"

//template
#define initTable(x) _Generic((x), Atelier_t *:  initAtelier,\
                                   Clients_t *:  initClients)(x)

void initAtelier(Atelier_t * Atelier);
void initClients(Clients_t * Clients);

#endif

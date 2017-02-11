#ifndef BASE_H
#define BASE_H

#include "atelier.h"
#include "clients.h"

#define initTable(x) _Generic((x), Atelier_t *:  initAtelier,\
                                   Clients_t *:  initClients)(x)

extern void initAtelier(Atelier_t * Atelier);
extern void initClients(Clients_t * Clients);

#endif

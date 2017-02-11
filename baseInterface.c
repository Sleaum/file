
#include "baseInterface.h"


void initAtelier(Atelier_t * Atelier)
{
  Atelier->init = atelierInit;
  Atelier->init(Atelier);
}

void initClients(Clients_t * Clients)
{
  Clients->init = clientsInit;
  Clients->init(Clients);
}





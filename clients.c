#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "error.h"
#include "clients.h"

static int cle1(Clients_t * Clients);

void clientsInit(Clients_t * Clients)
{
  memset(&Clients->str, 0, sizeof(strClients_t));
  Clients->cle1 = cle1;
}

static int cle1(Clients_t * Clients)
{
  int err= 0;
  Clients->str.b = 2;
  err = Clients->str.b;
  PERR(err)
  return EXIT_SUCCESS;
}




















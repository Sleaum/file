#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "error.h"
#include "baseInterface.h"


 int main(void) {
  int         status= 0;
  Atelier_t   Atelier;
  Clients_t   Clients;

  initErr();
  initTable(&Atelier);
  initTable(&Clients);

  status = Atelier.cle1(&Atelier);
  RET(status)

  status = Clients.cle1(&Clients);
  RET(status)

  return EXIT_SUCCESS;
}

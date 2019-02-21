#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "smartPointer.h"
#include "error.h"
#include "baseInterface.h"


 int main(void) {
  int         status= 0;
  Atelier_t   Atelier;
  Clients_t   Clients;
  autofree int *mySmartPointer= malloc(64);

  initErr();
  initTable(&Atelier);
  initTable(&Clients);

  status = Clients.cle1(&Clients);
  RET(status)

  status = Atelier.cle1(&Atelier);
  RET(status)

  return EXIT_SUCCESS;
}

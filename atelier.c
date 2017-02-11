#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "error.h"
#include "atelier.h"

static int cle1(Atelier_t * Atelier);

void atelierInit(Atelier_t * Atelier)
{
  memset(&Atelier->str, 0, sizeof(strAtelier_t));
  Atelier->cle1 = cle1;
}

static int cle1(Atelier_t * Atelier)
{
  int err= 0;
  Atelier->str.a = 1;
  err = Atelier->str.a;
  PERR(err)
  return EXIT_SUCCESS;
}




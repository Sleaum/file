#include <stdio.h>
#include <stdlib.h>
#include "smartPointer.h"

void __autofree(void *p_)
{
  void **p= (void **)p_;

  if(*p != NULL) {
    printf("free -» %p\n", *p);
    free(*p);
  }
}

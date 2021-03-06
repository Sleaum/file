/**
* @file error.c
*
* liste des erreurs.
*/

/*=============================================================================
INCLUDES
=============================================================================*/
#include "error.h"

/*=============================================================================
LOCAL FUNCTIONS PROTOTYPES
=============================================================================*/
/*=============================================================================
LOCAL VARIABLES
=============================================================================*/
/*=============================================================================
GLOBAL VARIABLES
=============================================================================*/
const err_t aDataErr[NB_ERROR] = {
  {NO_ERROR, "NO_ERROR"},
  {E_006, "ERROR6"},
  {E_005, "ERROR5"},
  {E_004, "ERROR4"},
  {E_003, "ERROR3"},
  {E_002, "ERROR2"},
  {E_001, "ERROR1"}
};

void * aErr[NB_ERROR];

/*=============================================================================
LOCAL CONSTANTS
=============================================================================*/
/*=============================================================================
LOCAL FUNCTIONS
=============================================================================*/

/*=============================================================================
GLOBAL FUNCTIONS
=============================================================================*/
void initErr(void)
{
  int cpt= 0;
  for(; cpt<NB_ERROR; ++cpt) {
    aErr[aDataErr[cpt].key] = aDataErr[cpt].data;
  }
}








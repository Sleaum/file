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
const err_t aDataErr[NB_ERR] = {
  {E_002, "ERROR2"},
  {E_004, "ERROR4"},
  {E_006, "ERROR6"},
  {E_005, "Blibla5 truc."},
  {E_003, "Erreur de l’atelier."},
  {E_001, "ERROR CLIENTS!!"}
};

void * aErr[NB_ERR];

/*=============================================================================
LOCAL CONSTANTS
=============================================================================*/
/*=============================================================================
LOCAL FUNCTIONS
=============================================================================*/

/*=============================================================================
GLOBAL FUNCTIONS
=============================================================================*/
void initErr()
{
  int cpt= 0;
  for(; cpt<NB_ERR; ++cpt) {
    aErr[aDataErr[cpt].key] = aDataErr[cpt].data;
  }
}








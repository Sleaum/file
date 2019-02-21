/**
* @file error.h
*
* liste des erreurs.
*
*/

#ifndef ERROR_H
#define ERROR_H

/*=============================================================================
INCLUDES
=============================================================================*/

/*=============================================================================
GLOBAL MACRO/CONSTANTS
=============================================================================*/
/**
 * Des la detection de l'erreur
 **/
#define PERR(err)   if((err) != NO_ERROR){                                                     \
                      fprintf (stderr, "%s [%s:%d]\n", (char*)aErr[(err)], __FILE__, __LINE__);\
                      return EXIT_FAILURE;                                                     \
                    }

/**
 * A chaque retour de fonction
 **/
#define RET(status) if ((status) == EXIT_FAILURE) {\
                      return EXIT_FAILURE;         \
                    }


/*=============================================================================
GLOBAL TYPEDEFS/ENUM/STRUCT
=============================================================================*/
/**
 * Structure liant un numéro d'erreur avec un message d'erreur.
 */
typedef struct {
  int    key;
  char * data;
} err_t;

/**
 * Liste des numéros d'erreur.
 */
enum {
  NO_ERROR,
  E_001,
  E_002,
  E_003,
  E_004,
  E_005,
  E_006,
  NB_ERROR
};

/*=============================================================================
GLOBAL VARIABLES
=============================================================================*/
/**
 * Tableau de structure liant un numéro d'erreur avec un message d'erreur.
 */
extern const err_t aDataErr[NB_ERROR];

/**
 * Tableau ordonnées d’adresses de messages d’erreur.
 */
extern void * aErr[NB_ERROR];


/*=============================================================================
GLOBAL FUNCTIONS PROTOTYPES
=============================================================================*/
/**
 * Fonction d’initialisation du tableau d’adresse aErr depuis aDataErr. Tableau utilisé dans la macro retournant le message d’erreur.
 * (Une sorte de fonction de hash triviale sans collision et sans perte de mémoire.)
 */
void initErr(void);

#endif // ERROR_H
















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
#define ERR(err)    ((char*) aErr[(err)])
#define PERR(err)   if((err) != EXIT_SUCCESS) {                                      \
                      fprintf (stderr, "%s [%s:%d]\n", ERR(err), __FILE__, __LINE__);\
                      return EXIT_FAILURE;                                           \
                    }
#define RET(status) if ((status) == EXIT_FAILURE) {                                  \
                      return EXIT_FAILURE;                                           \
                    }


/*=============================================================================
GLOBAL TYPEDEFS/ENUM/STRUCT
=============================================================================*/
/**
 * Structure liant un num�ro d�erreur avec un message d�erreur.
 */
typedef struct {
  int    key;
  char * data;
} err_t;

/**
 * Liste des num�ros d�erreur.
 */
enum {
  E_005,
  E_003,
  E_001,
  E_006,
  E_004,
  E_002,
  NB_ERR
};

/*=============================================================================
GLOBAL VARIABLES
=============================================================================*/
/**
 * Tableau de structure liant un num�ro d�erreur avec un message d�erreur.
 */
extern const err_t aDataErr[NB_ERR];

/**
 * Tableau ordonn�es d�adresses de messages d�erreur.
 */
extern void * aErr[NB_ERR];

/*=============================================================================
GLOBAL FUNCTIONS PROTOTYPES
=============================================================================*/
/**
 * Fonction d�initialisation du tableau d�adresse aErr depuis aDataErr. Tableau utilis� dans la macro retournant le message d�erreur.
 * (Une sorte de fonction de hash triviale sans collision et sans perte de m�moire.)
 */
void initErr();

#endif // ERROR_H
















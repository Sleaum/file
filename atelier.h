#ifndef ATELIER_H
#define ATELIER_H

typedef struct Atelier_s Atelier_t;
typedef struct {
	int a;
	int b;
} strAtelier_t;
typedef void (*atelierInit_t)(Atelier_t * Atelier);
typedef int  (*atelierCle1_t)(Atelier_t * Atelier);

void atelierInit(Atelier_t * Atelier);

struct Atelier_s {
  strAtelier_t  str;
  atelierInit_t init;
  atelierCle1_t cle1;
};

#endif

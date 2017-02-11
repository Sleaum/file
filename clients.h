#ifndef CLIENTS_H
#define CLIENTS_H

typedef struct Clients_s Clients_t;
typedef struct {
	int a;
	int b;
} strClients_t;
typedef void (*clientsInit_t)(Clients_t * Clients);
typedef int  (*clientsCle1_t)(Clients_t * Clients);

void clientsInit(Clients_t * Clients);

struct Clients_s {
  strClients_t  str;
  clientsInit_t init;
  clientsCle1_t cle1;
};

#endif

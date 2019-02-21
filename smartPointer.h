#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#define autofree __attribute__((cleanup(__autofree)))

void __autofree(void *p_);

#endif    

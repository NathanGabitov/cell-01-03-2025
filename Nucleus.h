#ifndef NUCLEUS_H
#define NUCLEUS_H

#include "DNA.h"

class Cell;

class Nucleus {
private:
    DNA* dna;
public:
    Nucleus();
    DNA getDNA();
};

#endif

#ifndef MITOCHONDRIA_H
#define MITOCHONDRIA_H

#include <vector>
#include "Substance.h"

class Cell;

class Mitochondria {
private:
    Cell* cell;
public:
    std::vector<Substance> substances;
    Mitochondria(Cell* c);
    void generateEnergy();
};

#endif

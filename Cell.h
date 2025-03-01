#ifndef CELL_H
#define CELL_H

#include "Mitochondria.h"
#include "Ribosome.h"
#include "Nucleus.h"
#include "Membrane.h"
#include "Protein.h"

class Cell {
private:
    int energy;
public:
    Mitochondria* mitochondria;
    Ribosome* ribosome;
    Nucleus* nucleus;
    Membrane* membrane;
    Protein* protein;

    Cell();
    void divide();
    void setEnergy(int value);
    int getEnergy();
};

#endif

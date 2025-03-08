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
    const int REPRODUCTION_ENERGY_COST = 20;

    Mitochondria* mitochondria;
    Ribosome* ribosome;
    Nucleus* nucleus;
    Membrane* membrane;
    Protein* protein;

    Cell(int c_energy);
    void divide();
    void setEnergy(int value);
    int getEnergy();
};

#endif

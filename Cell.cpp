#include "Cell.h"
#include <iostream>

Cell::Cell(int c_energy) : energy(c_energy) {
    mitochondria = new Mitochondria(this);
    ribosome = new Ribosome(this);
    nucleus = new Nucleus();
    membrane = new Membrane();
    protein = new Protein();
}

void Cell::divide() {
    if (energy >= REPRODUCTION_ENERGY_COST) {
        std::cout << "Cell divided!" << std::endl;
    } else {
        std::cout << "Not enough energy" << std::endl;
    }
}

void Cell::setEnergy(int value) {
    energy = value;
}

int Cell::getEnergy() {
    return energy;
}

#include "Cell.h"
#include <iostream>

Cell::Cell() : energy(2) {
    mitochondria = new Mitochondria(this);
    ribosome = new Ribosome(this);
    nucleus = new Nucleus();
    membrane = new Membrane();
    protein = new Protein();
}

void Cell::divide() {
    if (energy > 3) {
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

#include "Ribosome.h"
#include "Cell.h"
#include <iostream>

Ribosome::Ribosome(Cell* c) : cell(c) {}

void Ribosome::generateProtein() {
    if (cell->getEnergy() > 0) {
        std::cout << "Generate protein" << std::endl;
        cell->setEnergy(cell->getEnergy() - 1);
        cell->protein = new Protein();
    } else {
        std::cout << "No energy!" << std::endl;
    }
}

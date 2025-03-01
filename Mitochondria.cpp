#include "Mitochondria.h"
#include "Cell.h"

Mitochondria::Mitochondria(Cell* c) : cell(c) {}

void Mitochondria::generateEnergy() {
    int countEnergy = substances.size();
    substances.clear();
    cell->setEnergy(cell->getEnergy() + countEnergy + 1);
}

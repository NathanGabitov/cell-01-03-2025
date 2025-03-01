// g++ main.cpp Cell.cpp Ribosome.cpp Mitochondria.cpp Protein.cpp Membrane.cpp DNA.cpp Nucleus.cpp Glucose.cpp -o main.exe
#include "Cell.h"
#include "Substance.h"
#include "Glucose.h"
#include "Protein.h"
#include "Mitochondria.h"
#include "Ribosome.h"
#include "Membrane.h"
#include "DNA.h"
#include "Nucleus.h"
#include <iostream>
Substance generateSubstance() {
    std::cout << "Generate substance" << std::endl;
    return Glucose();
}

int main() {
    Cell cell = Cell();

    while (true) {
        cell.ribosome->generateProtein();

        Substance substance = generateSubstance();
        if (!cell.membrane->validate(substance)) {
            std::cout << "Bad substance!" << std::endl;
        } else {
            std::cout << "Good substance!" << std::endl;
        }
        std::cout << "Count energy " << cell.getEnergy() << std::endl;
        cell.protein->transportSubstanceInMitochondrion(substance, cell.mitochondria);
        cell.mitochondria->generateEnergy();
        std::cout << "Count energy " << cell.getEnergy() << std::endl;

        if (cell.getEnergy() > 3) {
            break;
        }
    }

    cell.divide();
}

#include <iostream>
#include <vector>
#include <type_traits>

class Cell;

class Substance {};

class Glucose : public Substance {};

class DNA {
private:
    std::string sequence;
public:
    void generateSequence() {}
};
    
class Nucleus {
private:
    DNA* dna;
public:
    Nucleus() {
        dna = new DNA();
    }
    DNA getDNA() {
        return *dna;
    }
};
    
class Mitochondria {
private:
    Cell* cell;
public:
    Mitochondria(Cell* c) : cell(c) {}
    std::vector<Substance> substances;
    void generateEnergy();
};
    
Substance generateSubstance() {
    std::cout << "Generate substance" << std::endl;
    return Glucose();
}
    
class Protein {
public:
    void transportSubstanceInMitochondrion(Substance substance, Mitochondria *mitochondrion) {
        mitochondrion->substances.push_back(substance);
    }
};
    
class Ribosome {
private:
    Cell* cell;
public:
    Ribosome(Cell* c) : cell(c) {}
    void generateProtein();
};
    
class Membrane {
public:
    bool validate(Substance substance) {
        return true;
    }
};

    
class Cell {
private:
    int energy;
public:
    Mitochondria* mitochondria;
    Ribosome* ribosome;
    Nucleus* nucleus;
    Membrane* membrane;
    Protein* protein;

    Cell() : energy(2) {
        mitochondria = new Mitochondria(this);
        ribosome = new Ribosome(this);
        nucleus = new Nucleus();
        membrane = new Membrane();
        protein = new Protein();
    }

    void divide() {
        if (energy > 3) {
            std::cout << "Ceil divided!" << std::endl;
        } else {
            std::cout << "Not enough energy" << std::endl;
        }
    }

    void setEnergy(int value) {
        energy = value;
    }
    int getEnergy() {
        return energy;
    }
};

void Mitochondria::generateEnergy() {
    int countEnergy = substances.size();
    substances.clear();
    cell->setEnergy(cell->getEnergy() + countEnergy + 1);
}

void Ribosome::generateProtein() {
    if (cell->getEnergy() > 0) {
        std::cout << "Generate protein" << std::endl;
        cell->setEnergy(cell->getEnergy() - 1);
        cell->protein = new Protein();
    } else {
        std::cout << "No energy!" << std::endl;
    }
}

int main() {
    Cell cell = Cell();

    while (true) {
        cell.ribosome->generateProtein();

        Substance substance = generateSubstance();
        if (!cell.membrane->validate(substance)) {
            std::cout << "Bad sustance!" << std::endl;
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

#include "Nucleus.h"
#include "Cell.h"

Nucleus::Nucleus() {
    dna = new DNA();
}

DNA Nucleus::getDNA() {
    return *dna;
}

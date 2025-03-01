#ifndef PROTEIN_H
#define PROTEIN_H

#include "Substance.h"
#include "Mitochondria.h"

class Protein {
public:
    void transportSubstanceInMitochondrion(Substance substance, Mitochondria* mitochondrion);
};

#endif

#include "Protein.h"

void Protein::transportSubstanceInMitochondrion(Substance substance, Mitochondria* mitochondrion) {
    mitochondrion->substances.push_back(substance);
}

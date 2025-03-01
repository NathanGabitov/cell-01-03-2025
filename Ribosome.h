#ifndef RIBOSOME_H
#define RIBOSOME_H

class Cell;

class Ribosome {
private:
    Cell* cell;
public:
    Ribosome(Cell* c);
    void generateProtein();
};

#endif

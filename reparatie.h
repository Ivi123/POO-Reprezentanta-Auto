#ifndef REPREZENTANTA_AUTO_REPARATIE_H
#define REPREZENTANTA_AUTO_REPARATIE_H

#include "revizie.h"

class reparatie {   // initial am vrut sa fac aceasta clasa ca fiind o derivata din clasa "revizie"
                    //dar am facut o compunere
    int costrep;

public:
    reparatie() = default;

    void exceptie(masina &m);

};

#endif //REPREZENTANTA_AUTO_REPARATIE_H

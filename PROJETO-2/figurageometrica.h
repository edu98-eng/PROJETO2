#ifndef figurageometrica_h
#define figurageometrica_h
#include "Escultor3D.h"

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual void draw(Sculptor &t) = 0;
};

#endif // figurageometrica_h

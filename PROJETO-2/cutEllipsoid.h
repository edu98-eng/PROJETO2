#ifndef cutEllipsoid_h
#define cutEllipsoid_h
#include "figurageometrica.h"

class cutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    cutEllipsoid(int excenter, int eycenter, int ezcenter, int erx, int ery, int erz);
    void draw(Sculptor &t);
};

#endif // cutEllipsoid_h

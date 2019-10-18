#ifndef putEllipsoid_h
#define putEllipsoid_h
#include "figurageometrica.h"

class putEllipsoid : public FiguraGeometrica
{

    int x, y, z, rx, ry, rz;
    float r, g, b, a;


public:
    putEllipsoid(int xcenter, int ycenter, int zcenter, int raiox, int raioy, int raioz, float er, float eg, float eb, float ea);
    void draw(Sculptor &t);
};


#endif // putEllipsoid_h

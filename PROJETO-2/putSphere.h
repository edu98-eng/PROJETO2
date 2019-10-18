#ifndef putSphere_h
#define putSphere_h
#include "figurageometrica.h"

class putSphere : public FiguraGeometrica
{
    int x, y, z, raio;
    float r, g, b, a;
public:
    putSphere(int xcenter, int ycenter, int zcenter, int s_raio, float sr, float sg, float sb, float sa);
    void draw(Sculptor &t);
};

#endif // putSphere_h

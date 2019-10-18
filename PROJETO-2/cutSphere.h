#ifndef cutSphere_h
#define cutSphere_h
#include "figurageometrica.h"

class cutSphere : public FiguraGeometrica
{
    int x,y,z,raio;


public:
    cutSphere(int xcenter, int ycenter, int zcenter, int s_raio);
    void draw(Sculptor &t);
};

#endif // cutSphere_h

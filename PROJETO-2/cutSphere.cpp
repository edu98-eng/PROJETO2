#include "cutsphere.h"

cutSphere::cutSphere(int xcenter, int ycenter, int zcenter, int s_raio)
{
    x = xcenter;
    y = ycenter;
    z = zcenter;
    raio = s_raio;
}

void cutSphere::draw(Sculptor &t)
{
    t.cutSphere(x,y,z,raio);
}

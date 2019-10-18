#include "putSphere.h"


putSphere::putSphere(int xcenter, int ycenter, int zcenter, int s_raio, float sr, float sg, float sb, float sa)
{
    x = xcenter;
    y = ycenter;
    z = zcenter;
    raio = s_raio;
    r = sr;
    g = sg;
    b = sb;
    a = sa;

}

void putSphere::draw(Sculptor &t)
{
       t.setColor(r,g,b,a);
       t.putSphere(x,y,z,raio);


}

#include "putEllipsoid.h"

putEllipsoid::putEllipsoid(int xcenter, int ycenter, int zcenter, int raiox, int raioy, int raioz, float er, float eg, float eb, float ea)
{
        x = xcenter;
        y = ycenter;
        z = zcenter;
        rx = raiox;
        ry = raioy;
        rz = raioz;
        r = er;
        g = eg;
        b = eb;
        a = ea;
}

void putEllipsoid::draw(Sculptor &t)
{
       t.setColor(r,g,b,a);
       t.putEllipsoid(x,y,z,rx,ry,rz);

}

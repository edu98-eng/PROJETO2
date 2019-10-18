#include "cutellipsoid.h"


cutEllipsoid::cutEllipsoid(int excenter, int eycenter, int ezcenter, int erx, int ery, int erz)
{
    xcenter = excenter;
    ycenter = eycenter;
    zcenter = ezcenter;
    rx = erx;
    ry = ery;
    rz = erz;

}

void cutEllipsoid::draw(Sculptor &t)
{
    t.cutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz);
}

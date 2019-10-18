#include "cutBox.h"


cutBox::cutBox(int bx0, int by0, int bz0, int bx1, int by1, int bz1)
{
    x0 = bx0;
    x1 = bx1;
    y0 = by0;
    y1 = by1;
    z0 = bz0;
    z1 = bz1;
}

void cutBox::draw(Sculptor &t)
{
    t.cutBox(x0,x1,y0,y1,z0,z1);
}

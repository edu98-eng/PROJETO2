#include "putBox.h"

putBox::putBox(int bx0, int by0, int bz0, int bx1, int by1, int bz1, float br, float bg, float bb, float ba)
{
    x0 = bx0;
    x1 = bx1;
    y0 = by0;
    y1 = by1;
    z0 = bz0;
    z1 = bz1;
    r = br;
    g = bg;
    b = bb;
    a = ba;
}

void putBox::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putBox(x0,x1,y0,y1,z0,z1);
}

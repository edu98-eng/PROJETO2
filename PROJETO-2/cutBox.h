#ifndef cutBox_h
#define cutBox_h
#include "figurageometrica.h"

class cutBox : public FiguraGeometrica

{
    int x0,y0,z0,x1,y1,z1;
public:
    cutBox(int bx0, int by0, int bz0, int bx1, int by1, int bz1);
    void draw(Sculptor &t);
};

#endif // cutBox_h

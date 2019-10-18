#ifndef putBox_h
#define putBox_h
#include "figurageometrica.h"

class putBox : public FiguraGeometrica
{
    int	x0, y0, z0, x1, y1, z1;
    float r, g, b, a;

public:
    putBox(int bx0, int by0, int bz0, int bx1, int by1, int bz1, float br, float bg, float bb, float ba);
    void draw(Sculptor &t);
};

#endif // putBox_h

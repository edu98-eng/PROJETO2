#ifndef putVoxel_h
#define putVoxel_h
#include "figurageometrica.h"


class PutVoxel : public FiguraGeometrica
{
    int x, y, z;
    float r, g, b, a;
public:

    PutVoxel(int mx, int my, int mz, float mr, float mg, float mb, float ma);

    void draw(Sculptor &t);
};

#endif // putVoxel_h

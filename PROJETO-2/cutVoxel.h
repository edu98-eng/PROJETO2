#ifndef cutVoxel_h
#define cutVoxel_h
#include "figurageometrica.h"

class cutVoxel : public FiguraGeometrica
{
    int x, y, z;
public:
    cutVoxel(int vx, int vy, int vz);
    void draw(Sculptor &t);
};

#endif // cutVoxel_h

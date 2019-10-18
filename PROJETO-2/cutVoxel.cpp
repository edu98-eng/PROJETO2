#include "cutVoxel.h"


cutVoxel::cutVoxel(int vx, int vy, int vz)
{
    x = vx;
    y = vy;
    z = vz;
}

void cutVoxel::draw(Sculptor &t)
{
    t.cutVoxel(x,y,z);
}

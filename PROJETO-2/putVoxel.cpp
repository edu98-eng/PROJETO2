#include "putVoxel.h"


PutVoxel::PutVoxel(int vx, int vy, int vz, float vr, float vg, float vb, float va){
    x = vx;
    y = vy;
    z = vz;
    r = vr;
    g = vg;
    b = vb;
    a = va;
}

void PutVoxel::draw(Sculptor &t)
{
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);
}

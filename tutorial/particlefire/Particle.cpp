#include "Particle.h"

namespace mypgm
{

Particle::Particle()
{
    mX = ((2.0 * rand()) / RAND_MAX) - 1;
    mY = ((2.0 * rand()) / RAND_MAX) - 1;
}

Particle::~Particle()
{
}

void Particle::update()
{
    mX += mXspeed;
    mY += mYspeed;

    if (mX < -1.0 || mX > 1.0)
    {
        mXspeed = -mXspeed;
    }

    if (mY < -1.0 || mY > 1.0)
    {
        mYspeed = -mYspeed;
    }
}

} // namespace mypgm
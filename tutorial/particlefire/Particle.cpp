#include "Particle.h"
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

namespace mypgm
{

Particle::Particle()
    : mX(0)
    , mY(0)
{
    init();
}

Particle::~Particle()
{
}

void Particle::init()
{
    mX = 0;
    mY = 0;

    mDirection = (2 * M_PI * rand()) / RAND_MAX;
    mSpeed     = (0.035 * rand()) / RAND_MAX;

    mSpeed *= mSpeed;
}

void Particle::update(int interval)
{
    mDirection += interval * 0.0002;

    double xSpeed = mSpeed * cos(mDirection);
    double ySpeed = mSpeed * sin(mDirection);

    mX += xSpeed * interval;
    mY += ySpeed * interval;

    if (mX < -1 || mX > 1 || mY < -1 || mY > 1)
    {
        init();
    }

    if(rand() < RAND_MAX/100)
    {
        init();
    }
}

} // namespace mypgm
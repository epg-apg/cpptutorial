#include "Particle.h"
#include <math.h>
#include <stdlib.h>

#ifndef M_PI 
#define M_PI (3.14159265358979323846) 
#endif 

namespace mypgm
{

Particle::Particle(): mX(0), mY(0)
{
    mDirection = (2 * M_PI * rand())/RAND_MAX;
    mSpeed = (0.0001 * rand())/RAND_MAX;
}

Particle::~Particle()
{
}

void Particle::update(int interval)
{
    double xSpeed = mSpeed * cos(mDirection);
    double ySpeed = mSpeed * sin(mDirection);

    mX += xSpeed * interval;
    mY += ySpeed * interval;
}

} // namespace mypgm
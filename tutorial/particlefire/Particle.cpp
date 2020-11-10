#include "Particle.h"
#include <stdlib.h>

namespace mypgm
{

Particle::Particle()
{
    mX = ((2.0 * rand())/RAND_MAX) - 1;
    mY = ((2.0 * rand())/RAND_MAX) - 1;
}

Particle::~Particle()
{
}

}
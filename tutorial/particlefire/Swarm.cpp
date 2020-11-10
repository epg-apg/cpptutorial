#include "Swarm.h"

namespace mypgm
{

Swarm::Swarm(/* args */)
{
    mParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
    delete[] mParticles;
}

} // namespace mypgm
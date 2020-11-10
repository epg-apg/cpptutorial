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

void Swarm::update()
{
    for (int i = 0; i < NPARTICLES; ++i)
    {
        mParticles[i].update();
    }
}

} // namespace mypgm
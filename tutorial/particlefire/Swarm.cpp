#include "Swarm.h"

namespace mypgm
{

Swarm::Swarm(/* args */): lastTime(0)
{
    mParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
    delete[] mParticles;
}

void Swarm::update(int elapsed)
{
    int interval = elapsed - lastTime;

    for (int i = 0; i < NPARTICLES; ++i)
    {
        mParticles[i].update(interval);
    }

    lastTime = elapsed;
}

} // namespace mypgm
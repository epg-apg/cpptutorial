#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace mypgm
{

class Swarm
{
  private:
    Particle * mParticles;

  public:
    Swarm(/* args */);
    ~Swarm();

    void update();

    const Particle * const getParticles()
    {
        return mParticles;
    }

    const static int NPARTICLES = 1000;
};

} // namespace mypgm

#endif
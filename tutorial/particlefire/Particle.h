#include <stdlib.h>

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace mypgm
{

class Particle
{
  private:
    double mXspeed = ((2.0 * rand())/RAND_MAX - 1) * 0.001;
    double mYspeed = ((2.0 * rand())/RAND_MAX - 1) * 0.001;
    
  public:
    Particle(/* args */);
    ~Particle();
    
    void update();

    double mX;
    double mY;
};

} // namespace mypgm

#endif
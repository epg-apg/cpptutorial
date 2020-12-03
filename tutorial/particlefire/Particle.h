#include <stdlib.h>

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace mypgm
{

class Particle
{
  private:
    double mSpeed;
    double mDirection;

    void init();
    
  public:
    Particle(/* args */);
    ~Particle();
    
    void update(int interval);

    double mX;
    double mY;
};

} // namespace mypgm

#endif
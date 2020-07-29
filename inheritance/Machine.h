#ifndef MACHINE_H_
#define MACHINE_H_

#include <iostream>

class Machine
{
public:
    Machine();
    Machine(int id);
    ~Machine();
    void info();

private:
    int id;
    
};

#endif
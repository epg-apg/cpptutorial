#ifndef EXERCISE_H_
#define EXERCISE_H_

#include <iostream>

class Exercise
{
private:
    std::string name;
public:
    Exercise(/* args */);
    ~Exercise();
    void setName(std::string newName);
    void output() const;
};

#endif
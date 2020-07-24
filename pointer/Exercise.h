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

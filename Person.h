#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{

public:
    Person();
    ~Person();
    std::string toString();
    void setName(std::string newName);
    std::string getName();

private:
    std::string name;
};

#endif
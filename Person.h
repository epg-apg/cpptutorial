#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{

public:
    Person();
    Person(std::string newName);
    Person(std::string newName, int newAge);
    ~Person();
    std::string toString();
    void setName(std::string newName);
    std::string getName();
    void setAge(int newAge) { age = newAge; }; // inline function
    int getAge() { return age; }; // inline function

private:
    std::string name;
    int age = 0;
};

#endif
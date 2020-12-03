#include <iostream>

class Animal
{
  public:
    Animal(){};
    virtual ~Animal(){};

    virtual void
    speak() // virtual creates a "V table" and allows C++ to run the function from the sub-class
    {
        std::cout << "???" << std::endl;
    }

    // virtual void speak()==0; <- sub-classes must implement the method
};

class Cat : public Animal
{
  public:
    Cat(){};
    ~Cat(){};
    void speak()
    {
        std::cout << "rrr" << std::endl;
    }
};

class HouseCat : public Cat
{
  public:
    HouseCat(){};
    ~HouseCat(){};
    void speak()
    {
        std::cout << "meow" << std::endl;
    }
};

int main()
{
    Animal *pAnimal = new HouseCat;

    pAnimal->speak();

    delete pAnimal;

    return 0;
}

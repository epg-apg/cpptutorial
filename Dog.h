#ifndef DOG_G_
#define DOG_G_

class Dog
{

  public:
    Dog();
    Dog(bool newHappy, int newAge);
    ~Dog();
    void makeHappy();
    void makeSad();

  private:
    bool happy = false;
    int age    = 0;
};

#endif
#ifndef CAT_H_
#define CAT_H_

class Cat
{

public:
    Cat();
    ~Cat();
    void speak();
    void jump();
    void makeHappy();
    void makeSad();

private:
    bool happy = false;
};

#endif
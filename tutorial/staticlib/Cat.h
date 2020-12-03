#ifndef CAT_H_
#define CAT_H_

namespace mypgm
{

void saySomething(); // here simply because of simplicty

class Cat
{

  public:
    Cat();
    ~Cat();
    void speak();

  private:
};
} // namespace mypgm

#endif
#include <iostream>
#include <string>
#include <climits>

int main()
{
    // integer
    int numberVar = 123;
    int numberNew = 456;
    int both = numberVar + numberNew;

    std::cout << "Hello " << numberVar << std::endl;
    std::cout << "New " << numberNew << std::endl;

    std::cout << "Both " << numberVar + numberNew << std::endl;
    std::cout << "Both " << both << std::endl;

    numberNew = numberNew + 1;
    std::cout << "New " << numberNew << std::endl;

    // string
    std::string mytext1 = "Hello ";
    std::string mytext2 = "string. ";
    std::cout << mytext1 << std::endl;
    std::cout << mytext2 << std::endl;
    std::cout << mytext1 << mytext2 << std::endl;

    std::string bothstr = mytext1 + mytext2;
    std::cout << bothstr << std::endl;

    // string input
    std::cout << "Enter your name: " << std::flush;
    
    std::string input;
    std::cin >> input;
    std::cout << "You entered: " << input << std::endl;

    // numeric input
    std::cout << "Enter a number: " << std::flush;
    
    int inputNo;
    std::cin >> inputNo;
    std::cout << "You entered: " << inputNo << std::endl;

    // integer variables
    int willnotwork = 12147483647;
    std::cout << "Will not work: " << willnotwork << std::endl;
    std::cout << "Max int value: " << INT_MAX << std::endl;    
    std::cout << "Min int value: " << INT_MIN << std::endl;    

    long long int willwork = 12147483647;
    std::cout << "Will work: " << willwork << std::endl;
    std::cout << "Max long long int value: " << __LONG_LONG_MAX__ << std::endl;

    std::cout << "Sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "Sizeof(short int): " << sizeof(short int) << std::endl;

    unsigned int myuint = 123;
    int myint = 123;

    return 0;
}
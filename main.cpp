#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

int main()
{
    // integer
    int numberVar = 123;
    int numberNew = 456;
    int both      = numberVar + numberNew;

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

    // std::string input;
    // std::cin >> input;
    // std::cout << "You entered: " << input << std::endl;

    // numeric input
    std::cout << "Enter a number: " << std::flush;

    // int inputNo;
    // std::cin >> inputNo;
    // std::cout << "You entered: " << inputNo << std::endl;

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
    int myint           = 123;

    // floating point
    float myfloat = 76.4;
    std::cout << std::scientific << "Float: " << myfloat << std::endl;
    std::cout << std::setprecision(20) << std::fixed << "Float: " << myfloat << std::endl;

    double mydouble = 76.4;
    std::cout << std::scientific << "Double: " << mydouble << std::endl;
    std::cout << std::setprecision(20) << std::fixed << "Double: " << mydouble << std::endl;

    long double myldouble = 76.4;
    std::cout << std::scientific << "Long Double: " << myldouble << std::endl;
    std::cout << std::setprecision(20) << std::fixed << "Long Double: " << myldouble << std::endl;

    std::cout << "Sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "Sizeof(long double): " << sizeof(long double) << std::endl;

    // primitive types
    bool mybool = true;
    std::cout << "Bool: " << mybool << std::endl;

    char mychar = 55;
    std::cout << "Char number: " << mychar << std::endl;

    char mychar2 = '7';
    std::cout << "Char: " << mychar2 << std::endl;
    std::cout << "Char number cast: " << (int)mychar2 << std::endl;

    wchar_t wValue = 'i';
    std::cout << "WChar: " << wValue << std::endl;

    // if syntax
    std::string password = "hello";
    std::cout << "Enter password: " << std::flush;

    std::string mypassword = "";
    // std::cin >> mypassword;

    if (password == mypassword)
    {
        std::cout << "Match!" << std::endl;
    }
    if (password != mypassword)
    {
        std::cout << "No match!" << std::endl;
    }

    // if-else syntax
    std::cout << "1.\tAdd new record" << std::endl;
    std::cout << "2.\tDelete record" << std::endl;
    std::cout << "3.\tView record" << std::endl;
    std::cout << "4.\tSearch record" << std::endl;
    std::cout << "5.\tQuit" << std::endl;

    std::cout << "Enter your selection: " << std::flush;

    int menuselection;
    // std::cin >> menuselection;

    if (menuselection < 3)
    {
        std::cout << "Nope!" << std::endl;
    }
    else
    {
        std::cout << "Okay!" << std::endl;
    }

    // if-else-if syntax
    if (menuselection == 1)
    {
        std::cout << "Add!" << std::endl;
    }
    else if (menuselection == 2)
    {
        std::cout << "Delete!" << std::endl;
    }
    else if (menuselection == 3)
    {
        std::cout << "View!" << std::endl;
    }
    else if (menuselection == 4)
    {
        std::cout << "Search!" << std::endl;
    }
    else if (menuselection == 5)
    {
        std::cout << "Quit!" << std::endl;
    }
    else
    {
        std::cout << "Invalid!" << std::endl;
    }

    // compare float and double
    float fval1 = 1.1;

    if (fval1 == 1.1) // wrong version
    {
        std::cout << "1.1!" << std::endl;
    }
    else
    {
        std::cout << "Not 1.1! " << std::setprecision(10) << fval1 << std::endl;
    }

    if (fval1 < 1.11) // right version
    {
        std::cout << "1.1!" << std::endl;
    }
    else
    {
        std::cout << "Not 1.1! " << std::setprecision(10) << fval1 << std::endl;
    }

    int ival1 = 7;
    int ival2 = 4;

    if (ival1 > 8)
    {
        std::cout << "Cond1 true" << std::endl;
    }
    else
    {
        std::cout << "Cond1 false" << std::endl;
    }

    if (ival1 > 8 && ival2 < 3) // && || ... avoid !=
    {
        std::cout << "Cond2 true" << std::endl;
    }
    else
    {
        std::cout << "Cond2 false" << std::endl;
    }

    if (ival1 > 8 && ival2 < 3 || ival1 < 10) // use brackets
    {
        std::cout << "Cond3 true" << std::endl;
    }
    else
    {
        std::cout << "Cond3 false" << std::endl;
    }

    // saving condition
    bool condition1 = (ival1 > 8 && ival2 < 3);
    bool condition2 = (ival1 < 10);

    if(condition1 || condition2)
    {
        std::cout << "Cond4 true" << std::endl;
    }

    return 0;
}
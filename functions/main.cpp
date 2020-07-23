#include <iostream>
#include "main.h"

int main()
{
    showMenu();
    int selection = getSelection();
    processSelection(selection);

    return 0;
}

void showMenu()
{
    std::cout << "1. Search" << std::endl;
    std::cout << "2. View" << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int getSelection()
{
    std::cout << "Enter selection: " << std::endl;

    int input;
    std::cin >> input;

    return input;
}

void processSelection(int selection)
{
    switch (selection)
    {
    case 1:
        std::cout << "Searching ..." << std::endl;
        break;
    case 2:
        std::cout << "Viewing ..." << std::endl;
        break;
    case 3:
        std::cout << "Quitting ..." << std::endl;
        break;
    default:
        std::cout << "Please select an item from the menu" << std::endl;
    }
}

#include <iostream>

int main()
{
    int num, squareNum;
    std::cout << "Please enter an integer: ";
    std::cin >> num;

    while(num < 1 or num > 99)
    {
        std::cout << "Please re-enter: ";
        std::cin >> num;
    }

    squareNum = num * 2;
    std::cout << "Number squared is " << squareNum << std::endl;
    return 0;
}
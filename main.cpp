#include <iostream>
#include "funcs.h"

void print_interval(int L, int U);

int main()
{
    std::cout << "List of nums between 1 inclusive through 11 exclusive: \n";
    print_interval(1,11);
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "List of nums between 10 (inclusive) through 21 (exclusive): \n";
    print_interval(10,21);
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "List of nums between 20 (inclusive) through 31 (exclusive): \n";
    print_interval(20,31);
    std::cout << "\n";
    return 0;
}
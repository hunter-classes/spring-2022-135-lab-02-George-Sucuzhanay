#include <iostream>
#include "funcs.h"

void print_interval(int L, int U);

int main()
{
    std::cout << "List of nums between 1 through 10: \n";
    print_interval(1,11);
    std::cout << "\n";

    std::cout << "List of nums between 10 through 20: \n";
    print_interval(10,21);
    std::cout << "\n";
    
    std::cout << "List of nums between 20 through 30: \n";
    print_interval(20,31);
    std::cout << "\n";
    return 0;
}
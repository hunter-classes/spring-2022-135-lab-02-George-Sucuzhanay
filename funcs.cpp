#include "funcs.h"
#include <iostream>

void print_interval(int L, int U){
    for (int i = L; i < U; i++)
    // L <= i < U separated by spaces
    {
        std::cout << i << " ";
    }
}
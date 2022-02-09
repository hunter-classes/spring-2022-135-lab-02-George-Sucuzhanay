#include <iostream>
int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i < 60; i++){
        std::cout << fib[i] << "\n";
    }
    // std::cout << "This is fib[59] = " << fib[59] << "\n";
    // std::cout << "This is fib[0] = " << fib[0] << "\n";
    
    /*
    When compling the file we see an integer's maximum value. 
    It overflows and "wraps around" to the negative when you try to add a value to it. 
    We can use a data type called long that allows larger maximums as an option.

    At fib[2000000000] (if we were to increase size of the array) 
    => this would be such a massive number

    */


    return 0;
}
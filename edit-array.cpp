#include <iostream>


int main()
{
    int userI;
    int userV;
    int myArr[10] = {};

    for(int i = 0; i < 10; i++){
        myArr[i] = 1;
    }

    do {


        for(int i = 0; i < 10; i++){
            std::cout << myArr[i] << " ";
        };
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "Input index: ";
        std::cin >> userI;
        
        std::cout << "Input value: ";
        std:: cin >> userV;

        // if i is good, update the array at index i

        // If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v
        if(userI >= 0 && userI < 10){
            myArr[userI] = userV;
        }
       std::cout << "\n";

    } while (userI >= 0 && userI < 10); // if the index was good, repeat

    std::cout << "Index out of range. Exit.\n";
    return 0;
}
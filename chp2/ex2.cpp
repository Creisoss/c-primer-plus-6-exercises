/*
* Write a C++ program that asks for a distance in furlongs and converts it to yards.
* (One furlong is 220 yards.)
*/

#include <iostream>
#define FURLONG_TO_YARD 220


int main(void){
    int furlongs = 0;
    std::cout << "How much furlongs: ";
    std::cin >> furlongs;
    std::cout << furlongs << " furlongs in yards is: " << furlongs * FURLONG_TO_YARD << std::endl;
    return 0;
}
/*
* Write a program that asks how many miles you have driven and how many gallons
* of gasoline you have used and then reports the miles per gallon your car has gotten.
* Or, if you prefer, the program can request distance in kilometers and petrol in liters
* and then report the result European style, in liters per 100 kilometers.
*/

#include <iostream>

int main(void){
    float kilometers;
    float liters;
    std::cout << "How many kilometers you have driven: ";
    std::cin >> kilometers;
    std::cout << "How many petrols in liters you have used: ";
    std::cin >> liters;
    std::cout << "Liters per 100 kilometer: " << (liters / kilometers) * 100 << " 1/100Km." << std::endl; 
    return 0;
}
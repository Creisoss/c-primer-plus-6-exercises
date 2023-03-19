/*
* Write a program that asks the user to enter his or her age.The program then should
* display the age in months:
* Enter your age: 29
* Your age in months is 348.
*/

#include <iostream>

#define A_YEAR_IN_MONTHS 12

int main(){
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age in months is " << age * A_YEAR_IN_MONTHS << "." << std::endl;
    return 0;
}
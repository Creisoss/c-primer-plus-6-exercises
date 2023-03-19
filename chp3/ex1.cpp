/*
* Write a short program that asks for your height in integer inches and then converts
* your height to feet and inches. Have the program use the underscore character to
* indicate where to type the response.Also use a const symbolic constant to repre-
* sent the conversion factor.
*/
#include <iostream>

#define INCHES_TO_FEET 12

int main(void)
{
    int height_in_inches = 0;
    int height_in_ft = 0;
    int rest_of_height_in_inches = 0;
    std::cout << "Enter your height in integer inches: ___\b\b\b";
    std::cin >> height_in_inches;
    height_in_ft = height_in_inches / INCHES_TO_FEET;
    rest_of_height_in_inches = height_in_inches % INCHES_TO_FEET;  
    std::cout << height_in_inches << " inches converts to: " << height_in_ft << "\'" << rest_of_height_in_inches << "\"" << std::endl;
    return 0;
}
/*
* Write a program that asks you to enter an automobile gasoline consumption figure
* in the European style (liters per 100 kilometers) and converts to the U.S. style of
* miles per gallon. Note that in addition to using different units of measurement, the
* U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
* tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
* mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km
*/

#include <iostream>

const float miles_to_a_hundred_km = 62.14;
const float gallon_to_liters = 3.875;


int main(void){
    float kilometers;
    float liters;
    std::cout << "How many kilometers you have driven: ";
    std::cin >> kilometers;
    std::cout << "How many petrols in liters you have used: ";
    std::cin >> liters;

    float miles = (kilometers / 100.0f) * miles_to_a_hundred_km;
    float gallons = liters /gallon_to_liters;

    std::cout << (liters / kilometers) * 100 << " 1/100Km = "  << miles/gallons << " mpg." << std::endl;

    return 0;
}
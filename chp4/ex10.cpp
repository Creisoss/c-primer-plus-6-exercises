/*
* Write a program that requests the user to enter three times for the 40-yd dash (or
* 40-meter, if you prefer) and then displays the times and the average. Use an array
* object to hold the data. (Use a built-in array if array is not available.)
*/

#include <iostream>
#include <array>

int main(void){

    std::array<float, 3> times;
    float average = 0.0f;
    std::cout << "Enter your first time in the 40 meter dash: ";
    std::cin >> times[0];
    std::cout << "Enter your second time in the 40 meter dash: ";
    std::cin >> times[1];
    std::cout << "Enter your third time in the 40 meter dash: ";
    std::cin >> times[2];
    
    average = (times[0] + times[1] + times[2])/times.size();
    std::cout << "Your times were: " << times[0] << ", " << times[1] << ", " << times[2] << ". Giving you an average time of " << average << std::endl;

    return 0;
}
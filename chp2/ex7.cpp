/*
* Write a program that asks the user to enter an hour value and a minute value.The
* main() function should then pass these two values to a type void function that dis-
* plays the two values in the format shown in the following sample run:
* Enter the number of hours: 9
* Enter the number of minutes: 28
* Time: 9:28
*/

#include <iostream>

void display_time(int hours, int minutes){
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}

int main(){
    int hours = 0;
    int minutes = 0;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    display_time(hours, minutes);

    return 0;
}
/*
* Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
* onds and that then displays the latitude in decimal format.There are 60 seconds of
* arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
* bolic constants.You should use a separate variable for each input value.A sample
* run should look like this:
* Enter a latitude in degrees, minutes, and seconds:
* First, enter the degrees: 37
* Next, enter the minutes of arc: 51
* Finally, enter the seconds of arc: 19
* 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/



#include <iostream>

#define SIZE_OF_ONE_HOUR_IN_MINUTES 60
#define SIZE_OF_ONE_HOUR_IN_SECONDS 3600

int main(void){
    int degrees = 0;
    int minutes = 0;
    int seconds = 0;
    double latitude_decimal = 0.0f;
    std::cout << "Enter a latitude in degress, minutes, and seconds: " << std::endl;
    std::cout << "First, enter the degrees: ____\b\b\b\b";
    std::cin >> degrees;
    std::cout << "Next, enter the minutes of arc: __\b\b";
    std::cin >> minutes;
    std::cout << "Finally, enter the seconds of arc: __\b\b";
    std::cin >> seconds;

    latitude_decimal = (float) degrees + ((float) minutes/SIZE_OF_ONE_HOUR_IN_MINUTES) + ((float) seconds/SIZE_OF_ONE_HOUR_IN_SECONDS);
    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " secondes = " << latitude_decimal << " degrees" << std::endl;

    return 0;
}
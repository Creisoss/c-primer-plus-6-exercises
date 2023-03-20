/*
* Write a program that asks the user to enter the number of seconds as an integer
* value (use type long, or, if available, long long) and that then displays the equiva-
* lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
* the number of hours in the day, the number of minutes in an hour, and the number
* of seconds in a minute.The output should look like this:
* Enter the number of seconds: 31600000
* 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/


#include <iostream>

const int hours_in_a_day = 24;
const int minutes_in_a_hour = 60;
const int seconds_in_a_minute = 60;


int main(void) {
    long long long_seconds = 0;

    std::cout << "Enter the number of seconds: ";
    std::cin >> long_seconds;


    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    minutes = long_seconds / seconds_in_a_minute;
    seconds = long_seconds % seconds_in_a_minute;

    hours = minutes / minutes_in_a_hour;
    minutes = minutes % minutes_in_a_hour;

    days = hours / hours_in_a_day;
    hours = hours % hours_in_a_day;

    std::cout << long_seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << std::endl; 
    return 0;
}
/*
* Write a program that has main() call a user-defined function that takes a Celsius
* temperature value as an argument and then returns the equivalent Fahrenheit value.
* The program should request the Celsius value as input from the user and display
* the result, as shown in the following code:
* Please enter a Celsius value: 20
* 20 degrees Celsius is 68 degrees Fahrenheit.
* For reference, here is the formula for making the conversion:
* Fahrenheit = 1.8 × degrees Celsius + 32.0
*/

#include <iostream>

#define celsius_conversor_to_farenheit_macro(celsius) (1.8 * celsius + 32.0)

float celsius_to_farenheit(float celsius){
    return celsius_conversor_to_farenheit_macro(celsius);
}


int main(void){
    float temperature = 0.0f;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> temperature;
    std::cout << temperature << " degress Celsius is " << celsius_to_farenheit(temperature) << " degress Fahrenheit." << std::endl;
    return 0;
}
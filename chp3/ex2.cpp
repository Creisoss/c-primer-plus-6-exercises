/*
* Write a short program that asks for your height in feet and inches and your weight
* in pounds. (Use three variables to store the information.) Have the program report
* your body mass index (BMI).To calculate the BMI, first convert your height in feet
* and inches to your height in inches (1 foot = 12 inches).Then convert your height
* in inches to your height in meters by multiplying by 0.0254.Then convert your
* weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
* your BMI by dividing your mass in kilograms by the square of your height in
* meters. Use symbolic constants to represent the various conversion factors.
*/

#include <iostream>


#define FT_TO_INCHES 12
#define INCHES_TO_METERS 0.0254
#define pounds_to_kg_macro(pounds) pounds/2.2

int main(void){
    int size_in_ft = 0;
    int size_in_inches = 0;
    float weight_in_pounds = 0;

    std::cout << "Write your size ft: __\b\b";
    std::cin >> size_in_ft;
    std::cout << "Write your size in inches: ___\b\b\b";
    std::cin >> size_in_inches;
    std::cout << "Wirte your weight in pounds: ___\b\b\b";
    std::cin >> weight_in_pounds;

    float size_in_meters = (((float) size_in_ft * FT_TO_INCHES) + size_in_inches) * INCHES_TO_METERS;
    float weight_in_kg = (pounds_to_kg_macro(weight_in_pounds));

    float bmi = weight_in_kg / (size_in_meters * size_in_meters);

    std::cout << "Your BMI is: " << bmi << "."<< std::endl;

    return 0;
}
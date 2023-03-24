/*
* The CandyBar structure contains three members, as described in Programming
* Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
* tializes them to values of your choice, and then displays the contents of each struc-
* ture.
*/
#include <iostream>
#include <string>

int main(void){

    struct CandyBar {
        std::string brand_name;
        float weight;
        int calories;
    };

    CandyBar snacks[3] = {
        {"Mocha munch", 2.3, 350},
        {"Hunbreaker", 6.7, 800},
        {"Biliejean", 4.3, 400},
        };
    

    std::cout << "Brand name: " << snacks[0].brand_name << "\nWeight: " << snacks[0].weight << "\ncalories: " << snacks[0].calories << "\n" << std::endl;
    std::cout << "Brand name: " << snacks[1].brand_name << "\nWeight: " << snacks[1].weight << "\ncalories: " << snacks[1].calories << "\n" << std::endl;
    std::cout << "Brand name: " << snacks[2].brand_name << "\nWeight: " << snacks[2].weight << "\ncalories: " << snacks[2].calories << "\n" << std::endl;


    return 0;
}
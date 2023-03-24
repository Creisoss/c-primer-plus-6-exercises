/*
* Do Programming Exercise 6, but instead of declaring an array of three CandyBar
* structures, use new to allocate the array dynamically.
*/

#include <iostream>
#include <string>

int main(void){

    struct CandyBar {
        std::string brand_name;
        float weight;
        int calories;
    };


    CandyBar* snacks = new CandyBar[3];

    snacks[0] = {"Mocha munch", 2.3, 350};
    snacks[1] = {"Hunbreaker", 6.7, 800};
    snacks[2] = {"Biliejean", 4.3, 400};
    

    std::cout << "Brand name: " << snacks[0].brand_name << "\nWeight: " << snacks[0].weight << "\ncalories: " << snacks[0].calories << "\n" << std::endl;
    std::cout << "Brand name: " << snacks[1].brand_name << "\nWeight: " << snacks[1].weight << "\ncalories: " << snacks[1].calories << "\n" << std::endl;
    std::cout << "Brand name: " << snacks[2].brand_name << "\nWeight: " << snacks[2].weight << "\ncalories: " << snacks[2].calories << "\n" << std::endl;

    delete [] snacks;
    
    return 0;
}
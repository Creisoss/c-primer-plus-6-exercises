/*
* Do Programming Exercise 7 but use new to allocate a structure instead of declaring
* a structure variable.Also have the program request the pizza diameter before it
* requests the pizza company name.
*/

#include <iostream>

#include <string>

struct Pizza {
    std::string pizza_company;
    float diameter;
    float weight;
};


int main(void){
    Pizza* new_pizza = new Pizza; 
    std::cout << "What is the name of the pizza company: ";
    getline(std::cin, new_pizza->pizza_company);
    std::cout << "What is the diameter of the pizza: ";
    std::cin >> new_pizza->diameter;
    std::cout << "What is the weight of the pizza: ";
    std::cin >> new_pizza->weight;
    std::cout << "New pizza from: " << new_pizza->pizza_company << "\nPizza status:\nDiameter: " << new_pizza->diameter << "\nWeight: " << new_pizza->weight << "KG" << std::endl;
    delete new_pizza;
    return 0;
}
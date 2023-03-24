/*
* William Wingate runs a pizza-analysis service. For each pizza, he needs to record
* the following information:
*   ° The name of the pizza company, which can consist of more than one word
*   ° The diameter of the pizza
*   ° The weight of the pizza
* Devise a structure that can hold this information and write a program that uses a
* structure variable of that type.The program should ask the user to enter each of the
* preceding items of information, and then the program should display that informa-
* tion. Use cin (or its methods) and cout.
*/

#include <iostream>
#include <string>

struct Pizza {
    std::string pizza_company;
    float diameter;
    float weight;
};


int main(void){
    Pizza new_pizza;
    std::cout << "What is the name of the pizza company: ";
    getline(std::cin, new_pizza.pizza_company);
    std::cout << "What is the diameter of the pizza: ";
    std::cin >> new_pizza.diameter;
    std::cout << "What is the weight of the pizza: ";
    std::cin >> new_pizza.weight;
    std::cout << "New pizza from: " << new_pizza.pizza_company << "\nPizza status:\nDiameter: " << new_pizza.diameter << "\nWeight: " << new_pizza.weight << "KG" << std::endl;
    return 0;
}
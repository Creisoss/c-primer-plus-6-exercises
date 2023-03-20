/*
* Write a program that requests the user to enter the current world population and
* the current population of the U.S. (or of some other nation of your choice). Store
* the information in variables of type long long. Have the program display the per-
* cent that the U.S. (or other nation’s) population is of the world’s population.The
* output should look something like this:
* Enter the world's population: 6898758899
* Enter the population of the US: 310783781
* The population of the US is 4.50492% of the world population.
* You can use the Internet to get more recent figures.
*/

#include <iostream>


int main(void){
    long world_population = 0;
    long population = 0;
    std::cout << "Enter the world's population: ";
    std::cin >> world_population;
    std::cout << "Enter the current population of Europe: ";
    std::cin >> population;
    std::cout << "The population of Europe is " << ((double) population/(double) world_population) * 100.0f << "% of the world population." << std::endl;
    
    return 0;
}
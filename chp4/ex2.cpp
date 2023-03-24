/*
* Rewrite Listing 4.4, using the C++ string class instead of char arrays.
* 
* // listing 4.4:
*
* // instr2.cpp -- reading more than one word with getline
* #include <iostream>
* int main()
* {
*   using namespace std;
*   const int ArSize = 20;
*   char name[ArSize];
*   char dessert[ArSize];
*   cout << "Enter your name:\n";
*   cin.getline(name, ArSize); // reads through newline
*   cout << "Enter your favorite dessert:\n";
*   cin.getline(dessert, ArSize);
*   cout << "I have some delicious " << dessert;
*   cout << " for you, " << name << ".\n";
*   return 0;
* }
*/


#include <iostream>
#include <string>

int main(void){
    std::string name;
    std::string dessert;
    std::cout << "Enter your name: ";
    getline(std::cin, name); // reads through newline
    std::cout << "Enter your favorite dessert: ";
    getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << std::endl;
    return 0;
}
/*
* Write a program that matches the description of the program in Programming
* Exercise 8, but use a string class object instead of an array. Include the string
* header file and use a relational operator to make the comparison test.
*/

#include <iostream>
#include <string>


int main(void) {
    std::string words;
    int count = 0;    
    std::cout << "Enter words (to stop, typr the word done):\n";
    std::cin >> words;
    while (words != "done") {
        std::cin >> words;
        count++;
    }

    std::cout << "You wrote a total of " << count << " words." << std::endl;
    return 0;
}
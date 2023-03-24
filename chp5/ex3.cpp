/*
* Write a program that asks the user to type in numbers.After each entry, the pro-
* gram should report the cumulative sum of the entries to date.The program should
* terminate when the user enters 0.
*/

#include <iostream>

int main(void) {
    long long temp_val = 0;
    long long cumulative = 0;
    do {
        std::cout << cumulative << " Total value" << std::endl;
        std::cout << "Type another int to add to the total value or type to 0 to exit: ";
        std::cin >> temp_val;
        cumulative += temp_val;
    }while (temp_val != 0);
    return 0;
}
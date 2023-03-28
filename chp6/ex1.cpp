/*
* Write a program that reads keyboard input to the @ symbol and that echoes the
* input except for digits, converting each uppercase character to lowercase, and vice
* versa. (Don’t forget the cctype family.)
*/

#include <iostream>
#include <cctype>

int main(void){
    char ch = '\0';

    do {
        std::cin >> ch;
        if (std::isupper(ch)) {
            std::cout << "Upper: " << ch << " Lower: " << (char) std::tolower(ch) << std::endl;
        } else if (std::islower(ch)) {
            std::cout << "Lower: " << ch << " Upper: " << (char) std::toupper(ch) << std::endl;
        } else {
            std::cout << "Error\nInvalid input: " << ch << std::endl;
        }
        std::cin.clear();
    } while (ch != '@');

    return 0;
}
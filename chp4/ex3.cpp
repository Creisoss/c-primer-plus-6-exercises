/*
* Write a program that asks the user to enter his or her first name and then last
* name, and that then constructs, stores, and displays a third string, consisting of the
* user’s last name followed by a comma, a space, and first name. Use char arrays and
* functions from the cstring header file.A sample run could look like this:
* Enter your first name: Flip
* Enter your last name: Fleming
* Here’s the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>

int main(){
    const int ARRSIZE = 40;
    char first_name[ARRSIZE];
    char last_name[ARRSIZE];
    char comma_n_space[ARRSIZE] = ", ";
    char sentence[3*ARRSIZE];

    std::cout << "Enter your first name: ";
    std::cin.get(first_name, ARRSIZE).get();
    std::cout << "Enter your last name: ";
    std::cin.get(last_name, ARRSIZE).get();
    std::strcpy(sentence, std::strcat(last_name, std::strcat(comma_n_space, first_name)));
    std::cout << "Here's the information in a single string: " << sentence << std::endl;

    return 0;
}
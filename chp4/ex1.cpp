/*
* Write a C++ program that requests and displays information as shown in the fol-
* lowing example of output:
* What is your first name? Betty Sue
* What is your last name? Yewe
* What letter grade do you deserve? B
* What is your age? 22
* Name: Yewe, Betty Sue
* Grade: C
* Age: 22
* Note that the program should be able to accept first names that comprise more
* than one word.Also note that the program adjusts the grade downward—that is, up
* one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
* worry about the gap between a D and an F.
*/


#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

int main(void){
    std::string first_name;
    std::string last_name;
    char grade;
    int age;


    std::cout << "What is your first name? ";
    getline(std::cin, first_name);
    std::cout << "What is yout last name? ";
    getline(std::cin, last_name);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;
    grade = grade + 1;
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "Name: " << last_name << ", " << first_name << "\nGrade: " << grade << "\nAge: " << age << std::endl;
    return 0;
}

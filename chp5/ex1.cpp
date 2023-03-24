/*
* Write a program that requests the user to enter two integers.The program should
* then calculate and report the sum of all the integers between and including the two
* integers.At this point, assume that the smaller integer is entered first. For example, if
* the user enters 2 and 9, the program should report that the sum of all the integers
* from 2 through 9 is 44.
*/

#include <iostream>

int main(void) {
    int start, end, total = 0;
    std::cout << "Write the first number: ";
    std::cin >> start;
    std::cout << "Write the last number: ";
    std::cin >> end;
    for(int i = start; i <= end; i++) {
        total += i;
    }
    std::cout << "The sum of all numbers between " << start << " and " << end << " is: " << total << "." << std::endl;

    return 0;
}
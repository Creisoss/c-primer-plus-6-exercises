/*
* You sell the book C++ for Fools.Write a program that has you enter a year’s worth
* of monthly sales (in terms of number of books, not of money).The program should
* use a loop to prompt you by month, using an array of char * (or an array of
* string objects, if you prefer) initialized to the month strings and storing the input
* data in an array of int.Then, the program should find the sum of the array con-
* tents and report the total sales for the year.
*/

#include <iostream>
#include <string>

const int YEARSIZE = 12;

int main(void) {
    std::string months[YEARSIZE] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "November", "October", "November", "December"};
    int month_sales[YEARSIZE];
    for (int i = 0; i < YEARSIZE; i++) {
        std::cout << "What were the month sales of " << months[i] << " ? ";
        std::cin >> month_sales[i];
    }
    int year_sales = 0;
    for (int i = 0; i < YEARSIZE; i++) {
        year_sales += month_sales[i];
    }

    std::cout << "The total sale of an year: " << year_sales << std::endl;

    return 0;
}
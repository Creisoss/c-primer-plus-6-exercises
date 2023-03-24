/*
* Do Programming Exercise 5 but use a two-dimensional array to store input for 3
* years of monthly sales. Report the total sales for each individual year and for the
* combined years.
*/

#include <iostream>
#include <string>

const int YEARSIZE = 12;

int main(void) {
    std::string months[YEARSIZE] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "November", "October", "November", "December"};
    int month_sales[3][YEARSIZE];
    for (int j = 0; j < 3; j ++) {
        for (int i = 0; i < YEARSIZE; i++) {
            std::cout << "What were the month sales of " << months[i] << " in the " << j+1 << " year? ";
            std::cin >> month_sales[j][i];
        }
    }
    int year_sales = 0;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < YEARSIZE; i++) {
            year_sales += month_sales[j][i];
        }
    }

    std::cout << "The total sale of three year: " << year_sales << std::endl;

    return 0;
}
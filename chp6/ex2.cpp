/*
* Write a program that reads up to 10 donation values into an array of double. (Or, if
* you prefer, use an array template object.) The program should terminate input on
* non-numeric input. It should report the average of the numbers and also report
* how many numbers in the array are larger than the average.
*/

#include <cctype>
#include <iostream>
#include <array>

int main(void) {
    int arrsize = 0;
    double arr[10];
    double x = 0.f;
    for(int i = 0; i < 10; i++) {
        std::cout << "Write a double: ";
        std::cin >> x;
        if (std::cin.fail() || std::cin.eof()) {
            std::cout << "Invalid input. Exiting." << std::endl;
            break;
        }else {
            arr[i] = x;
            arrsize++;
        }
    }
    for (int j = 0; j < arrsize; j++) {
        std::cout << arr[j] << "\n";
    }

    return 0;
}
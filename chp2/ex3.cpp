/*
* Write a C++ program that uses three user-defined functions (counting main() as
* one) and produces the following output:
* Three blind mice
* Three blind mice
* See how they run
* See how they run
* One function, called two times, should produce the first two lines, and the remain-
* ing function, also called twice, should produce the remaining output.
*/

#include <iostream>

void foo(){
    std::cout << "Three blind mice" << std::endl;
}

void bar(){
    std::cout << "See how they run" << std::endl;
}


int main(){
    foo();
    foo();
    bar();
    bar();
    return 0;
}
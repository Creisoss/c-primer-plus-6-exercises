/*
* Write a precursor to a menu-driven program.The program should display a menu
* offering four choices, each labeled with a letter. If the user responds with a letter
* other than one of the four valid choices, the program should prompt the user to
* enter a valid response until the user complies.Then the program should use a
* switch to select a simple action based on the user’s selection.A program run could
* look something like this:
*    Please enter one of the following choices:
*    c) carnivore    t) tree
*    p) pianist      g) game
*    f
*    Please enter a c, p, t, or g: q
*    Please enter a c, p, t, or g: t
*    A maple is a tree.
*/

#include <iostream>
#include <cstring>

int main(void) {
    const char CARNIVORE[] = "carnivore";
    const char TREE[] = "tree";
    const char PIANIST[] = "pianist";
    const char GAME[] = "game";
    char str[30] = "A maple is a ";
    char ch = '\0';
    std::cout << "Please enter one of the following choices:" << std::endl;
    std::cout << "c) carnivore\tt) tree\np) pianist\tg) game" << std::endl;
    std::cin >> ch;
    switch (ch) {
        case 'c':
            std::strcat(str, CARNIVORE);
            std::cout << str << std::endl;
            break;
        case 't':
            std::strcat(str, TREE);
            std::cout << str << std::endl;
            break;
        case 'p':
            std::strcat(str, PIANIST);
            std::cout << str << std::endl;
            break;
        case 'g':
            std::strcat(str, GAME);
            std::cout << str << std::endl;
            break;
        default:
            bool checker = false;
            do{
                if (checker) break;
                std::cout << "Please enter a c, p, t, or g: ";
                std::cin >> ch;
                switch (ch) {
                    case 'c':
                        std::strcat(str, CARNIVORE);
                        std::cout << str << std::endl;
                        checker = true;
                        break;
                    case 't':
                        std::strcat(str, TREE);
                        std::cout << str << std::endl;
                        checker = true;
                        break;
                    case 'p':
                        std::strcat(str, PIANIST);
                        std::cout << str << std::endl;
                        checker = true;
                        break;
                    case 'g':
                        std::strcat(str, GAME);
                        std::cout << str << std::endl;
                        checker = true;
                        break;
                    default:
                        break;
                }
            }while(true);
            break;
    } 
    return 0;
}
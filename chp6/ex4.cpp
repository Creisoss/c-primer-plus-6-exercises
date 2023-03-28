/*
* When you join the Benevolent Order of Programmers, you can be known at BOP
* meetings by your real name, your job title, or your secret BOP name.Write a pro-
* gram that can list members by real name, by job title, by secret name, or by a mem-
* ber’s preference. Base the program on the following structure:
*   // Benevolent Order of Programmers name structure
*   struct bop {
*       char fullname[strsize]; // real name
*       char title[strsize];
*       // job title
*       char bopname[strsize]; // secret BOP name
*       int preference;
*       // 0 = fullname, 1 = title, 2 = bopname
*   };
* In the program, create a small array of such structures and initialize it to suitable
* values. Have the program run a loop that lets the user select from different alterna-
* tives:
*   a. display by name      b. display by title
*   c. display by bopname   d. display by preference
*   q. quit
* Note that “display by preference” does not mean display the preference member; it
* means display the member corresponding to the preference number. For instance, if
* preference is 1, choice d would display the programmer’s job title.A sample run
* may look something like the following:
*   Benevolent Order of Programmers Report
*   a. display by name      b. display by title
*   c. display by bopname   d. display by preference
*   q. quit
*   Enter your choice: a
*   Wimp Macho
*   Raki Rhodes
*   Celia Laiter
*   Hoppy Hipman
*   Pat Hand
*   Next choice: d
*   Wimp Macho
*   Junior Programmer
*   MIPS
*   Analyst Trainee
*   LOOPY
*   Next choice: q
*   Bye!
*/


#include <iostream>

const int STRSIZE = 100;
const int ARRSIZE = 4;
struct bop {
    char fullname[STRSIZE];
    char bopname[STRSIZE];
    char title[STRSIZE];
    int preference;
};

void display_name(bop bopper){
    std::cout << bopper.fullname << std::endl;
}


void display_title(bop bopper){
    std::cout << bopper.title << std::endl;
}

void display_bopname(bop bopper){
    std::cout << bopper.bopname << std::endl;
}


int main(void) {
    bop boppers[ARRSIZE] = {{"Wimp macho", "Sundr fire", "Junior programmer", 1}, 
                      {"Raki Rhodes", "MIPS", "Hr", 2},
                      {"Celia Laiter", "LOLIPOP", "Analyst trainee", 0},
                      {"Mark plier", "Plior", "Youtuber", 1}};

    char ch = '\0';
    bool checker = false;
    while (true) {
        if (checker) break;
        std::cout << "Benevolant Order of Programmers report\na. display the name\tb. display the title\nc. display the bopname\td. display by preference\nq. quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> ch;
        switch (ch) {
            case 'a':
                for(int i = 0; i < ARRSIZE; i++){
                    display_name(boppers[i]);
                }
                break;
            case 'b':
                for(int i = 0; i < ARRSIZE; i++){
                    display_title(boppers[i]);
                }
                break;
            case 'c':
                for(int i = 0; i < ARRSIZE; i++){
                    display_bopname(boppers[i]);
                }
                break;
            case 'd':
                for(int i = 0; i < ARRSIZE; i++){
                    switch (boppers[i].preference) {
                        case 0:
                            display_name(boppers[i]);
                            break;
                        case 1:
                            display_title(boppers[i]);
                            break;
                        case 2:
                            display_bopname(boppers[i]);
                            break;
                        default:
                            std::cout << "Invalid input" << std::endl;
                            break;
                    }
                }
                break;
            case 'q':
                checker = true;
                break;
            default:
                std::cout << "Invalid input" << std::endl;
                break;
        }
        
    }
    return 0;
}




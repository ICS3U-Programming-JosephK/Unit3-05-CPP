// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 13 2022
// This program asks the user for the month as a number
// between 1 and 12. It then displays the month as a
// string to the user.

#include <iostream>

int main() {
    // declare variables
    int userMonth;

    // Ask the user for the month
    std::cout << "Enter the number for a month (i.2. 2 for February): ";
    std::cin >> userMonth;

    // state the month selected as a string
    // Switch case is similar to an IfElse structure
    switch (userMonth) {
        case 1:
            std::cout << userMonth << " Represents January.\n";
            break;

        case 2:
            std::cout << userMonth << " Represents February.\n";
            break;

        case 3:
            std::cout << userMonth << " Represents March.\n";
            break;

        case 4:
            std::cout << userMonth << " Represents April.\n";
            break;

        case 5:
            std::cout << userMonth << " Represents May.\n";
            break;

        case 6:
            std::cout << userMonth << " Represents June.\n";
            break;

        case 7:
            std::cout << userMonth << " Represents July.\n";
            break;

        case 8:
            std::cout << userMonth << " Represents August.\n";
            break;

        case 9:
            std::cout << userMonth << " Represents September.\n";
            break;

        case 10:
            std::cout << userMonth << " Represents October.\n";
            break;

        case 11:
            std::cout << userMonth << " Represents November.\n";
            break;

        case 12:
            std::cout << userMonth << " Represents December.\n";
            break;

        // handle the error case - similar to else statement
        default:
            std::cout << "Error. " << userMonth <<
            " does not represent a month.\n";
    }
}

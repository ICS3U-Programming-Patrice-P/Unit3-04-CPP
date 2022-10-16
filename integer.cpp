// Copyright (c) 2022 Patrice Pat-odita All rights reserved.
//
// Created by: Patrice Pat-Odita
// Created on: Oct 11,  2022
// This program asks the user for a number and it tells
// them if the number is positive, negative or zero.

#include <iostream>

int main() {
    // local variable
    float userInput;

    // input
    std::cout << "Enter any integer(number): ";
    std::cin >> userInput;

    // process
    if (userInput < 0) {
        // output
        std::cout << userInput << " is a NEGATIVE number";
    } else if (userInput > 0) {
        std::cout << userInput << " is a POSITIVE number";
    } else if (userInput == 0) {
        std::cout << userInput << " is just zero";
    }
}

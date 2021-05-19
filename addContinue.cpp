// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program determines the sum of positive numbers
//      inputted by the user

#include <iostream>
#include <string>

main() {
    // this function runs the "Add Continue" program
    std::string stringToAdd;
    std::string numString;
    int integerToAdd;
    int numInteger;
    int loopCounter = 0;
    int total = 0;

    // input
    std::cout << "How many numbers do you want to add?: ";
    std::cin >> stringToAdd;
    std::cout << ""<< std::endl;


    // process
    try {
        integerToAdd = std::stoi(stringToAdd);
        if (integerToAdd > 0) {
            while (integerToAdd > loopCounter) {
                std::cout << "Enter a number to add: ";
                std::cin >> numString;
                try {
                    numInteger = std::stoi(numString);
                    loopCounter += 1;
                    if (numInteger < 0) {
                        continue;
                    }
                    total += numInteger;
                }
                catch (std::invalid_argument) {
                    std::cout << "Invalid number!" << std::endl;
                    continue;
                }
            }
        std::cout << "The sum of all positive numbers is " << total << std::endl;
        } else {
            std::cout << "Invalid number!" << std::endl;
        }
    } catch (std::invalid_argument) {
    // output
        std::cout << "That is not an integer at all!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}

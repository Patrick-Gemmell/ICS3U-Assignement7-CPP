// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: November 2019
// This program finds numbers in a list

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>


int main() {
    // This program finds numbers in a list
    int numberArray[50];
    int seed;
    int repeater = 0;
    int randomnumbers = 0;
    std::string userNumber;
    int userNumberInt;
    int checkerVal = 0;
    srand(time(NULL));
    // inputs
    for (repeater = 0; repeater < 50 ; repeater++) {
        randomnumbers = (rand() % 100) + 1;
        std::cout << "Generated number " << repeater + 1 << " is " <<
                                            randomnumbers << std::endl;
        numberArray[repeater] = randomnumbers;
    }
    std::cout << "Please enter the number you wish to search for: ";
    std::cin >> userNumber;
    // process and output
    try {
        userNumberInt = std::stoi(userNumber);
        for (repeater = 0; repeater < 50; repeater++) {
            if (userNumberInt == numberArray[repeater]) {
                std::cout << "The number " << userNumberInt
                          << " is located the list at the "
                          << repeater + 1 << "th place" << std::endl;
                checkerVal = 1;
            }
        }
    } catch (...) {
        checkerVal = 1;
        std::cout << "Please input proper integer number" << std::endl;
    }
    if (checkerVal == 0) {
        std::cout << "Your number was not on the list" << std::endl;
    }
}

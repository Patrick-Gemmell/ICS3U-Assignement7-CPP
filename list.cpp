// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: Nov 2019
// This program finds a number in a random array

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <array>

int determiner(std::string userNumber, int numberArray[50]) {

    // process and output
    int userNumberInt; 
    int repeater = 0;
    int checkerVal = 0;
    try {
        userNumberInt = std::stoi(userNumber);
        for (repeater = 0; repeater < 50; repeater++) {
            if (userNumberInt == numberArray[repeater]) {
                std::cout << "The number " << userNumberInt
                          << " is located on the list at the "
                          << repeater + 1 << "th place" << std::endl;
                checkerVal = 1;
            }
        }
    } catch (...) {
        checkerVal = 1;
        std::cout << "Please input only proper integer numbers" << std::endl;
    }
    if (checkerVal == 0) {
        std::cout << "Your number was not on the list" << std::endl;
    }
}

int main() {
    // This program finds numbers in a array
    // Variables
    srand(time(NULL));
    int numberArray[50];
    int seed;
    int randomnumbers = 0;
    int checkAnswer;
    int repeater = 0;
    int userNumberIntT;
    std::string userNumber;

    // Inputs
    for (repeater = 0; repeater < 50 ; repeater++) {
        randomnumbers = (rand() % 100) + 1;
        std::cout << "Generated number " << repeater + 1 << " is " <<
                                            randomnumbers << std::endl;
        numberArray[repeater] = randomnumbers;
    }
    std::cout << "Please enter the number you wish to search for: ";
    std::cin >> userNumber;
    
    checkAnswer = determiner(userNumber, numberArray);

}
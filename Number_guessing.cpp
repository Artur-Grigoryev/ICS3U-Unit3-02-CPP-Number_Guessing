// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 3, 2021
// This file runs the number guessing game

#include <iostream>

const int program_number = 6;
main() {
    int user_number;
    // Function that runs the game
    // User input
    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "Input your number: ";
    std::cin >> user_number;

    // Process
    if (user_number == program_number) {

        // Output 
        std::cout << "You have guessed the correct number!\n";
    } else {
        std::cout << "You guessed wrong!";
    }
}
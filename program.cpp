// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>

main() {
    // this function uses a try statement
    std::string integer;
    int year;

    // input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> integer;

    std::cout << "" << std::endl;

    // process & output
    try {
        year = std::stoi(integer);
        if (year % 400 == 0) {
            std::cout << year << " is definitely a leap year" << std::endl;
        } else {
            if (year % 100 == 0) {
                std::cout << year << " isn't a leap year" << std::endl;
            } else {
                if (year % 4 == 0) {
                    std::cout << year << " is definitely"
                    << "a leap year" << std::endl;
                } else {
                    std::cout << year << " isn't a leap year" << std::endl;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}

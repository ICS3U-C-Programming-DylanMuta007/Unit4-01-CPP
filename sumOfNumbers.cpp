// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// Calculates the sum up until the provided number by the user (limited to 100)
#include <iostream>
#include <string>

int main() {
    // Get user_numb as string
    std::string userNumbStr;

    std::cout << "Input a positive integer: ";
    std::cin >> userNumbStr;
    std::cout << "" << std::endl;

    try {
        // Tries to convert string into an integer
        int userNumbInt = std::stoi(userNumbStr);

        // Checks if the user input is less than 0 or more than 100
        if (userNumbInt < 0 || userNumbInt > 100) {
            std::cout << "chose a number between 0 and 100";
            std::cout << "" << std::endl;
        } else {
            // Sets counter and sum to 0
            int counter = 0;
            int sum = 0;

            // Loops until the counter is the same as user_numb_as_int
            while (counter < userNumbInt) {
                counter = counter + 1;
                sum = sum + counter;

                std::cout << counter << " time(s) through the loop.";
                std::cout << "" << std::endl;
            }

            //Shows the sum from 0 to user input
            std::cout << "" << std::endl;
            std::cout << "the sum from 0 to " << userNumbInt;
            std::cout << " = " << sum;
            std::cout << "" << std::endl;
        }
    // If the user_input cant be converted prints the catch statement
    } catch(...) {
        std::cout << "Please input a number";
        std::cout << "" << std::endl;
    }
}

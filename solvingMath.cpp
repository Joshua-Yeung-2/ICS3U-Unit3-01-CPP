// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program solving basic math question

#include <iostream>

int main() {
    // this  function solving basic math question
    int first_number;
    int second_number;
    float answer;

    // input
    std::cout << "Enter first number: ";
    std::cin >> first_number;
    std::cout << "Enter second number: ";
    std::cin >> second_number;
    std::cout << "" << std::endl;

    // process
    answer = first_number + second_number;

    // output
    std::cout << "The answer is " << answer << std::endl;

    std::cout << "\nDone" << std::endl;
}

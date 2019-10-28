// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program display square of 0 to user integer

#include <iostream>
#include <cmath>

main() {
    // this function uses a for loop
    int positiveInteger;
    int result;
    int loopCounter = 0;

    // input
    std::cout << "Enter the integer you want to calculate the square from 0: ";
    std::cin >> positiveInteger;

    // process & output
    for (loopCounter = 0; loopCounter < positiveInteger + 1; loopCounter++) {
        result = pow(loopCounter, 2.0);
        std::cout << loopCounter <<"² = " << result << std::endl;
    }
}
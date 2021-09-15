// !/usr/bin/env python3
// Copyright [2021] Rohnin Barrette"  [legal/copyright]
// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program calculates the cost of a pizza when given diameter

#include <iostream>
#include <iomanip>

int main() {
    // This program calculates the cost of a pizza when given diameter
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float MATERIALS = 0.5;
    const float HST = 0.13;

    float diameter;
    float subtotal;
    float total;

    // Input
    std::cout << " Enter the diameter of the pizza. (inch): ";
    std::cin >> diameter;

    // process
    subtotal = RENT + LABOUR + (diameter * MATERIALS);
    total = subtotal * (1 + HST);

    // output
    std::cout << " the final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}

// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: OCT 2019
// This program finds the area of a triangle

#include <iostream>

int main() {
    // this function adds numbers
    int num1;
    int num2;
    int ans;

    // input
    std::cout << "Enter the base length of the triangle: ";
    std::cin >> num1;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> num2;

    // process
    ans = (num1*num2)/2;

    // output
    std::cout << "" << std::endl;
    std::cout <<"The area is: " << ans<< std::endl;\
}

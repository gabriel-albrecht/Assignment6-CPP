// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program calculates the volume of a cone

#include <iostream>
#include <string>
#include <cmath>

double CalculateVolume(float radius, float height) {
    // calculate volume
    double coneVolume;

    // process
    coneVolume = M_PI * pow(radius, 2.0) * (height / 3);

    // output
    return coneVolume;
}

main() {
    // this function gets radius and height
    std::cout << "Hi\nWe will be calculating the volume of a cone!\n"
    << std::endl;

    while (true) {
        try {
            double volume;
            float radiusFromUser;
            float heightFromUser;
            std::string radiusString;
            std::string heightString;

            // input
            std::cout << "Enter the radius of a cone (cm): ";
            std::cin >> radiusString;
            std::cout << "Enter the height of a cone (cm): ";
            std::cin >> heightString;
            std::cout << std::endl;

            radiusFromUser = std::stoi(radiusString);
            heightFromUser = std::stoi(heightString);

            // call functions
            volume = CalculateVolume(radiusFromUser, heightFromUser);
            if (volume >= 100) {
                if (volume >= 1000) {
                    std::cout.precision(6);
                } else {
                    std::cout.precision(5);
                }
            } else {
                std::cout.precision(4);
    }

            if (radiusFromUser <= 0 || heightFromUser <= 0) {
                std::cout << "Invalid input\n" << std::endl;
            } else {
                // output
                std::cout << "The volume is: " << volume <<
                " cm³" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "You entered an invalid key.\nTry again.\n"
            << std::endl;
        }
    }
}

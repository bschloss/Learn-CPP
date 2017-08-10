/* 
 * File:   main.cpp
 * Author: bschloss
 *
 * Created on August 9, 2017, 5:51 PM
 */

#include <iostream>

/*
 * This project is designed to practice using the cin and cout objects in the iostream
 */
int main() {
    std::cout << "Enter a number: "; //ask user for a number
    int x; // no need to initialize x since we're going to overwrite that value
    std::cin >> x; // read number from console and store it in x
    std::cout << "You entered " << x << std::endl;
    return 0;
}


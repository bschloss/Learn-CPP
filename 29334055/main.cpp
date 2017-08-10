/* 
 * File:   main.cpp
 * Author: bschloss
 *
 * Created on August 9, 2017, 6:16 PM
 */

#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>



/*
 * 
 */
int main() {
    double n;
    double m;
    double a;
    
    std::cin >> n;
    std::cin >> m;
    std::cin >> a;
    
    long long int min_blocks = ceil( m / a ) * ceil( n / a );
    std::cout << min_blocks << std::endl;
    
    return 0;
}


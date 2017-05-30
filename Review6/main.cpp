//
//  main.cpp
//  Review6
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/*
 
 1. Test the initial version of the program
 2. Change to retrieve two values and assign them to variables
    If the first value is higher print a phrase (similar to previous exercise)
 3. Change the code to multiply those values and print the result
 */


#include <iostream>

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    std::cin >> a;
    std::cin >>b;
    if (a>b){
        std::cout << a << " is higher than " << b << "\n";
    }
    else{
        std::cout << b << " is higher than " << a << "\n";
    }
    std::cout<< "The product of the numbers is " << a*b << "\n";
    
    
    return 0;
}

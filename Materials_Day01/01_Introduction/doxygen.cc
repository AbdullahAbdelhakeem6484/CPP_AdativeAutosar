#include <iostream>

/**
 * @brief Adds two integers
 * 
 * @param a First number
 * @param b Second number
 * @return int Sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function
 * 
 * Entry point of the program.
 */
int main() {
    std::cout << "3 + 5 = " << add(3, 5) << std::endl;
    return 0;
}

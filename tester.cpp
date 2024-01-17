#include <iostream>

int main() {
    // Declare variables to store the input
    int number1, number2, sum;

    // Ask the user for two numbers
    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    // Calculate the sum of the numbers
    sum = number1 + number2;

    // Display the sum
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}

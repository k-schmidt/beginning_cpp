#include <iostream>

int main() {
    int num {};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << num << " is even" << std::endl;
    else
        std::cout << num << " is odd" << std::endl;

    std::cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << std::endl;
}
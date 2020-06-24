#include <iostream>

int main() {
    int cents {};
    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};

    std::cout << "Please enter an integer amount in cents: ";
    std::cin >> cents;

    int change {cents};

    if (cents <=0) {
        std::cout << "Please enter an integer that is greater than 0";
        return 1;
    }

    dollars = cents / 100;
    if (dollars)
        cents %= 100;

    quarters = cents / 25;
    if (quarters)
        cents %= 25;

    dimes = cents / 10;
    if (dimes)
        cents %= 10;

    nickels = cents / 5;
    if (nickels)
        cents %= 5;

    pennies = cents / 1;
    if (pennies)
        cents %= 1;

    std::cout << "I can simplify " << change << " to the following: " << std::endl;
    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    std::cout << std::endl;
    return 0;
}
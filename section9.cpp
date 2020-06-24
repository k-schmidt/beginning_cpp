#include <iostream>
#include <vector>

int main() {

    std::vector<int> vec;
    char choice {};

    do {
        std::cout << std::endl;
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 'p':
            case 'P': {
                std::cout << "[ "; 
                for (auto i: vec)
                    std::cout << i << ' ';
                std::cout << ']';
                break;
            }
            case 'a':
            case 'A': {
                int num;
                std::cout << "Please enter a number: ";
                std::cin >> num;
                vec.push_back(num);
                break;
            }
            case 'm':
            case 'M': {
                double sum {0};
                if (vec.size() == 0) {
                    std::cout << "There are no numbers to compute, try again.";
                    break;
                }
                for (auto i: vec)
                    sum += i;
                std::cout << "The mean of the numbers is " << sum / vec.size();
                break;
            }
            case 's':
            case 'S': {
                if (vec.size() == 0) {
                    std::cout << "There are no numbers to compute, try again.";
                    break;
                }
                int min = vec.at(0);
                for (size_t j {1}; j < vec.size(); ++j) {
                    if (vec.at(j) < min) {
                        min = vec.at(j);
                    }
                }
                std::cout << "The smallest number is " << min;
                break;
            }
            case 'l':
            case 'L': {
                if (vec.size() == 0) {
                    std::cout << "There are no numbers to compute, try again.";
                    break;
                }
                int max = vec.at(0);
                for (size_t j {1}; j < vec.size(); ++j) {
                    if (vec.at(j) > max)
                        max = vec.at(j);
                }
                std::cout << "The largest number is " << max;
                break;
            }
            case 'q':
            case 'Q': {
                std::cout << "Quitting the application, bye-bye." << std::endl;
                break;
            }
            default:
                std::cout << "Invalid choice, try again." << std::endl;
        }

    } while (tolower(choice) != 'q');
}
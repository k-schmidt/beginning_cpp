#include <iostream>
#include <vector>

void display_menu() {
    std::cout << std::endl;
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl << std::endl;
    std::cout << "Enter your choice: ";
}

void print_numbers(std::vector<int> vec) {
    std::cout << "[ "; 
    for (auto i: vec)
        std::cout << i << ' ';
    std::cout << ']';
}

void append_number(std::vector<int> &vec) {
    int num;
    std::cout << "Please enter a number: ";
    std::cin >> num;
    vec.push_back(num);
}

void display_mean(std::vector<int> &vec) {
    double sum {0};
    for (auto i: vec)
        sum += i;
    std::cout << "The mean of the numbers is " << sum / vec.size();
}

void display_min(std::vector<int> &vec) {
    int min = vec.at(0);
    for (size_t j {1}; j < vec.size(); ++j) {
        if (vec.at(j) < min) {
            min = vec.at(j);
        }
    }
    std::cout << "The smallest number is " << min;
}

void display_max(std::vector<int> &vec) {
    int max = vec.at(0);
    for (size_t j {1}; j < vec.size(); ++j) {
        if (vec.at(j) > max)
            max = vec.at(j);
    }
    std::cout << "The largest number is " << max;
}

char get_selection() {
    char choice;
    std::cin >> choice;
    return tolower(choice);
}

int main() {

    std::vector<int> vec;
    char choice {};
    std::string empty_vec_message = "There are no numbers to compute, try again.";
    std::string quit_message = "Quitting the application, bye-bye.";
    std::string invalid_choice_message = "Invalid choice, try again.";

    do {
        display_menu();
        char choice = get_selection();

        switch (choice) {
            case 'p': {
                print_numbers(vec);
                break;
            }
            case 'a': {
                append_number(vec);
                break;
            }
            case 'm': {
                if (vec.size() == 0) {
                    std::cout << empty_vec_message;
                    break;
                }
                display_mean(vec);
                break;
            }
            case 's': {
                if (vec.size() == 0) {
                    std::cout << empty_vec_message;
                    break;
                }
                display_min(vec);
                break;
            }
            case 'l': {
                if (vec.size() == 0) {
                    std::cout << empty_vec_message;
                    break;
                }
                display_max(vec);
                break;
            }
            case 'q': {
                std::cout << quit_message << std::endl;
                break;
            }
            default:
                std::cout << invalid_choice_message << std::endl;
        }

    } while (choice != 'q');
}
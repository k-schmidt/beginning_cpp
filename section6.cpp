#include <iostream>

int main() {
    int small_room_charge {25};
    int large_room_charge {35};
    double sales_tax_rate {.06};
    int valid_days {30};
    int small_rooms;
    int large_rooms;

    std::cout << "Hello! Welcome to Frank's Carpet Cleaning Service!" << std::endl;

    std::cout << "How many small rooms do you need cleaned? ";
    std::cin >> small_rooms;

    std::cout << "How many large rooms do you need cleaned? ";
    std::cin >> large_rooms;

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of large rooms: " << large_rooms << std::endl;
    std::cout << "Price per small room: " << small_room_charge << std::endl;
    std::cout << "Price per large room: " << large_room_charge << std::endl;
    std::cout << "Cost: " << small_room_charge * small_rooms + large_room_charge * large_rooms << std::endl;
    std::cout << "Tax: " << ((small_room_charge * small_rooms) + (large_room_charge + large_rooms)) * sales_tax_rate << std::endl;
}
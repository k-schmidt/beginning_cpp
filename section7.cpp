#include <iostream>

#include <vector>

class Account{
    public:
        Account(double b);
        void deposit(double amt);
        void withdraw(double amt);
        double getBalance() const;
    private:
        double balance;
};

int main()
{
    std::vector <int> vector1;
    std::vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << vector1.at(0) << std::endl;
    std::cout << vector1.at(1) << std::endl;
    std::cout << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << vector2.at(0) << std::endl;
    std::cout << vector2.at(1) << std::endl;
    std::cout << vector2.size() << std::endl;

    std::vector <std::vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector1.at(0) = 1000;

    for (auto& x : vector2d)
    {
        for (int i = 0; i < x.size(); i++)
        {
            std::cout << x.at(i) << std::endl;
        }
    }

    vector1.at(0) = 1000;

    for (auto& x : vector2d)
    {
        for (int i = 0; i < x.size(); i++)
        {
            std::cout << x.at(i) << std::endl;
        }
    }
    std::cout << vector1.at(0) << std::endl;

    // std::vector<int>* vec_array = new std::vector<int> {0,1,2,3,4,5,6,7,8,9};
    // for (auto x : vec_array)
    //     std::cout << x << std::endl;

    std::cout << (1.0 < 1) << std::endl;
}
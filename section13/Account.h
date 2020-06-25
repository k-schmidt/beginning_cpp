#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    std::string name;
    double balance;

public:
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // methods will be declared outside class definition
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // ACCOUNT_H
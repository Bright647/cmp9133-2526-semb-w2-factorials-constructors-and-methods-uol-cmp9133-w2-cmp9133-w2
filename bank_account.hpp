#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(){
        // TODO: Implement the constructor
    }

    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance){
        // TODO: Implement the constructor
    }

    // Deposit method
    void Deposit(double amount) {
        // TODO: Implement the Deposit method
    }

    // Withdraw method
    void Withdraw(double amount) {
        // TODO: Implement the Deposit method
    }

    // Display account information
    void DisplayAccountInfo() {
        // TODO: Implement the DisplayAccountInfo method
    }

    double GetBalance() const {
        std::cout << "Test" << std::endl;
        return balance;
    }
};



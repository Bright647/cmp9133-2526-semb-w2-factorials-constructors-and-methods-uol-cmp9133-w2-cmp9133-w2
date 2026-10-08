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
        accountNumber = "";
        accountHolderName = "";
        balance = 0.0;

    }

    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance){
        // TODO: Implement the constructor
        accountNumber = accNumber;
    accountHolderName = accHolder;
    balance = initialBalance;

    }

    // Deposit method
    void Deposit(double amount) {
        // TODO: Implement the Deposit method
         if (amount > 0) {
        balance += amount;
    } else {
        std::cout << "Invalid deposit amount.\n";
    }
    }

    // Withdraw method
    void Withdraw(double amount) {
        // TODO: Implement the Deposit method
        if (amount <= 0) {
        std::cout << "Invalid withdrawal amount.\n";
    } else if (amount > balance) {
        std::cout << "Insufficient funds.\n";
    } else {
        balance -= amount;
    }
    }

    // Display account information
    void DisplayAccountInfo() {
        // TODO: Implement the DisplayAccountInfo method
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder: " << accountHolderName << "\n";
        std::cout << "Balance: " << balance << "\n";
    }

    double GetBalance() const {
        std::cout << "Test" << std::endl;
        return balance;
    }
};



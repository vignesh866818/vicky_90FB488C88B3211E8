#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolder;
        accountBalance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Balance for " << accountHolderName << ": $" << accountBalance << std::endl;
    }
};

int main() {
    // Create a BankAccount instance
    BankAccount myAccount("123456", "John Doe", 1000.00);

    // Test deposit and withdrawal functionality
    myAccount.displayBalance();
    myAccount.deposit(500.00);
    myAccount.displayBalance();
    myAccount.withdraw(200.00);
    myAccount.displayBalance();
    myAccount.withdraw(1500.00);  // This should show an error message
    myAccount.displayBalance();

    return 0;
}

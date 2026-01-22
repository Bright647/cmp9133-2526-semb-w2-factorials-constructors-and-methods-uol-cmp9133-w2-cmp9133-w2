// #include <gtest/gtest.h>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.hpp"

TEST_CASE("DefaultConstructorTest") {
    BankAccount account;
    // Assuming GetBalance() returns the current balance
    REQUIRE(account.GetBalance() == 0);
}


TEST_CASE("CustomConstructorTest") {
    BankAccount account("test", "test", 1000);
    // Assuming GetBalance() returns the current balance
    REQUIRE(account.GetBalance() == 1000);
}

TEST_CASE("DepositTest") {
    BankAccount account;
    account.Deposit(500);
    // Assuming GetBalance() returns the current balance
    REQUIRE(account.GetBalance() == 500);
}

TEST_CASE("WithdrawTest") {
    BankAccount account;
    account.Deposit(500);
    account.Withdraw(200);
    // Assuming GetBalance() returns the current balance
    REQUIRE(account.GetBalance() == 300);
}

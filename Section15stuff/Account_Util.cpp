#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts){
    std::cout << "\n====Accounts==================" << std::endl;
    for (const auto &acc:accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "\n====Depositing Accounts=======" << std::endl;
    for (auto &acc:accounts)
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of  " << amount << " to " << acc << std::endl;
}
void withdraw(std::vector<Account> &accounts, double amount){
        std::cout << "\n====Withdrawing Accounts===" << std::endl;
    for (auto &acc:accounts)
        if (acc.withdraw(amount))
            std::cout << "Withdraw " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Withdraw of  " << amount << " to "<< acc << std::endl;
}







void display(const std::vector<SavingsAccount> &accounts){
    std::cout << "\n====Savings Accounts==================" << std::endl;
    for (const auto &acc:accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<SavingsAccount> &accounts, double amount){
    std::cout << "\n====Depositing Savings Accounts=======" << std::endl;
    for (auto &acc:accounts)
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to "<< acc << std::endl;
        else
            std::cout << "Failed Deposit of  " << amount << " to " << acc << std::endl;
}
void withdraw(std::vector<SavingsAccount> &accounts, double amount){
        std::cout << "\n====Withdrawing Savings Accounts===" << std::endl;
    for (auto &acc:accounts)
        if (acc.withdraw(amount))
            std::cout << "Withdraw " << amount << " to "<<  acc << std::endl;
        else
            std::cout << "Failed Withdraw of  " << amount << " to " << acc << std::endl;
}








void display(const std::vector<CheckingAccount> &accounts){
    std::cout << "\n====Checking Accounts==================" << std::endl;
    for (const auto &acc:accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<CheckingAccount> &accounts, double amount){
    std::cout << "\n====Depositing Checking Accounts=======" << std::endl;
    for (auto &acc:accounts)
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to "<< acc << std::endl;
        else
            std::cout << "Failed Deposit of  " << amount << " to " << acc << std::endl;
}
void withdraw(std::vector<CheckingAccount> &accounts, double amount){
        std::cout << "\n====Withdrawing Checking Accounts===" << std::endl;
    for (auto &acc:accounts)
        if (acc.withdraw(amount))
            std::cout << "Withdraw " << amount << " to "<<  acc << std::endl;
        else
            std::cout << "Failed Withdraw of  " << amount << " to " << acc << std::endl;
}






void display(const std::vector<TrustAccount> &accounts){
    std::cout << "\n====Trust Accounts==================" << std::endl;
    for (const auto &acc:accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<TrustAccount> &accounts, double amount){
    std::cout << "\n====Depositing Trust Accounts=======" << std::endl;
    for (auto &acc:accounts)
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to "<< acc << std::endl;
        else
            std::cout << "Failed Deposit of  " << amount << " to " << acc << std::endl;
}
void withdraw(std::vector<TrustAccount> &accounts, double amount){
        std::cout << "\n====Withdrawing Trust Accounts===" << std::endl;
    for (auto &acc:accounts)
        if (acc.withdraw(amount))
            std::cout << "Withdraw " << amount << " to "<<  acc << std::endl;
        else
            std::cout << "Failed Withdraw of  " << amount << " to " << acc << std::endl;
}
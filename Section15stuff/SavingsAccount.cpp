#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(std::string name, double balance, double int_rate)
: Account{name, balance}, int_rate{int_rate}
{
}

bool SavingsAccount::deposit(double amount) {
    amount += amount *(int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &acc){
    os << "[Savings_Account: " << acc.name << ": " << acc.balance << "]";
    return os;
}
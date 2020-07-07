#include "TrustAccount.h"
#include <iostream>

TrustAccount::TrustAccount(std::string name, double balance, double int_rate)
: SavingsAccount{name, balance, int_rate}
{
}

bool TrustAccount::deposit(double amount) {
    if (amount >= 5000) {
        amount += 50;
    }
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const TrustAccount &acc){
    os << "[Trust_Account: " << acc.name << ": " << acc.balance << "]";
    return os;
}
#include "CheckingAccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(std::string name, double balance)
: Account(name, balance)
{
}


bool CheckingAccount::withdraw(double amount) {
    return Account::withdraw(amount + 1.50);
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &acc){
    os << "[Checking_Account: " << acc.name << ": " << acc.balance << "]";
    return os;
}
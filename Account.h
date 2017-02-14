#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    explicit Account(std::string accountName);
    std::string getName() const;
    int getPass() const;
    void deposit(int depositAmount);
    int getBalance() const;

private:
std::string name;
int pass = 1234;
int balance;
};
#endif

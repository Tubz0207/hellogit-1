#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    void setName(std::string AccountName);
    std::string getName();
    void setPass(int num);
    int getPass();
    void withdrawal(int withdrawlAmount);
    int getBalance();

private:
string name;
int pass=1234;
int balance;
};
#endif

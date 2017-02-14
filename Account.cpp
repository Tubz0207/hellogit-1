
#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

void Account::setName(string AccountName){
  name = AccountName;
}

string Account::getName() const {
return name;
}
void Account::setPass(int num){
pass = num;
}
int Account::getpass() const{
return pass;
}
void Account::withdrawal (int withdrawalAmount) {
if (withdrawalAmount > 0) {
balance -= withdrawalAmount;
}
}
int Account::getBalance()const {
return balance;
}


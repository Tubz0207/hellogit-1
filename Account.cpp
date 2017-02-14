
#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

/*Account::Account(string accountName)
: name(accountName)
{
	
}*/

string Account::getName() const {
return name;
}

int Account::getPass() const{
return pass;
}
void Account::deposit (int Amount) {
if (depositAmount > 0) {
balance += depositAmount;
}
}
int Account::getBalance()const {
return balance;
}


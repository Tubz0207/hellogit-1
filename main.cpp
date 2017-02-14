
#include<iostream>
#include<string>
#include<vector>
#include "Account.h";
using namespace std;

int main() 
{
  vector<int>withdrawals;
  vector<Account>A;
  string AccountName;
  string str;
  int num;
  int WithdrawalAmount;
  cout << "Welcome .\n";
  for (int i=0; i < 4; i++)
  {
     A.push_back(AccountName,num,balance);
     cout << "Please enter your name .\n";
     cin >> AccountName;
     A.setName(AccountName);
     cout << "Please enter your pass? .\n";
     cin >> num;
     If (A.getpass()!= num) 
     {
        cout << "Incorrect pass" << endl;
        return 0;
     }
     cout << "How much would you like to withdraw? .\n";
     cin >> WithdrawalAmount;
     A.withdrawal(WithdrawalAmount);
     withdrawals.push_back(WithdrawalAmount);
     cout << "Are you done? .\n";
     cin >> str;
     while (str != "yes") 
     {
       cout << "How much would you like to withdraw? .\n";
       cin >> WithdrawalAmount;
       A.withdrawal(WithdrawalAmount);
       withdrawals.push_back(WithdrawlAmount);
       cout << "Are you done? .\n";
       cin >> str;
     }
  }
  for (int i = 0; i < 4; i++)
  {
     cout << A[i] <<endl;
  }
  cout << "Thank you" <<endl;
  return 0;
}

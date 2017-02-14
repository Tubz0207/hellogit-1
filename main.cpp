
#include<iostream>
#include<string>
#include<vector>
#include "Account.h"
using namespace std;

int linearSearch(auto data,auto key);

int main() 
{
	vector<int> myVector;
	vector<Account> Names;
	int depositAmount;
	string str;
	/*Account account1{"Dylan"};
	Account account2{"Tariq"};
	Account account3{"Shakeem"};*/
	int num;
	cout <<"Welcome .\n";
	cout <<"Please enter your pass .\n";
	cin >> num;
	for (int i = 0; i < 3; i++);
	{
		while (num != Names.getPass())
		{
			cout << "Incorrect Pass!!.\n";
			cout << "Please enter your pass .\n";
			cin >> num;
		}
		cout << "How much would you like to deposit?.\n";
		cin >> depositAmount;
		Names.deposit(depositAmount);
		myVector.push_back(depositAmount);
		while (str != "yes")
		{
			cout << "How much would you like to deposit?.\n";
			cin >> depositAmount;
			Names.deposit(depositAmount);
			myVector.push_back(depositAmount);
		}
	}
	int key;
	int linearSearch(auto data, auto key)
	{
		for (int j=0;j<Data.size(); j++)
		{
			if (Data[i] == key)
			{
				return j;
			}
		}
		return -1;
	}
	for (int k = 0; k < 10000; k++)
	{
		cout << "You deposited " << myVector.pop_back();
	}
		cout << "Your balance is " << Names.getBalance() <<endl;
		cout << "Thank you" << endl;
		return 0;
}

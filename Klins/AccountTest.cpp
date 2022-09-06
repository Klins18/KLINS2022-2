#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	Account account1{"Jane Green", 50};
	Account account2{"John Blue", -7};
	
	cout << "Account1: " << account1.getName() << " balance is: $"<< account1.getBalance();
	cout << "Account2: " << account2.getName() << " balance is: $"<< account2.getBalance();	
	
	cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "Adding " << depositAmount;
	account1.deposit(depositAmount);
	
	cout << "\n\naccount1: "<< account1.getName() << "balance is: $" <<account1.getBalance();
	cout << "\n\naccount2: "<< account2.getName() << "balance is: $" <<account2.getBalance();
	
	cout << "\n\nEnter deposit amount for account2: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "Adding " << depositAmount;
	account2.deposit(depositAmount);
	
	cout << "\n\naccount1: "<< account1.getName() << "balance is: $" <<account1.getBalance();
	cout << "\n\naccount2: "<< account2.getName() << "balance is: $" <<account2.getBalance() << endl;
	return 0;
}

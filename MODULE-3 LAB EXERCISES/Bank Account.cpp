/*Class for Bank Account 
o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private. 
o Objective: Understand encapsulation in classes.
*/

#include <iostream>
using namespace std;

class BankAccount 
{
private:
    double balance;  

public:
    BankAccount(double initialBalance) 
	{
        if (initialBalance >= 0) 
		{
            balance = initialBalance;
        } else 
		{
            balance = 0;
            cout << "Initial balance is invalid. Setting balance to $0." << endl;
        }
    }

    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else 
		{
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) 
	{
        if (amount <= 0) 
		{
            cout << "Withdrawal amount must be positive." << endl;
        } else if (amount > balance) 
		{
            cout << "Insufficient funds. Current balance: $" << balance << endl;
        } else 
		{
            balance -= amount;
            cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
        }
    }

    double getBalance() const 
	{
        return balance;
    }

    void displayBalance() const 
	{
        cout << "Current balance: $" << balance << endl;
    }
};

main() 
{
    
    BankAccount myAccount(1000.0);

    cout << "----- Initial Balance -----" << endl;
    myAccount.displayBalance();

    cout << "\n----- Deposit -----" << endl;
    myAccount.deposit(500.0);  
    myAccount.deposit(-50.0);  

    cout << "\n----- Withdraw -----" << endl;
    myAccount.withdraw(200.0);  
    myAccount.withdraw(2000.0); 
    myAccount.withdraw(-30.0); 

    cout << "\n----- Final Balance -----" << endl;
    myAccount.displayBalance();

}

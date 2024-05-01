#pragma once
#include "Person.h"

/*
1. Client class which contains the following:
	a. Int id, string name, string password, double balance.
	b. Setter functions
	i. setName: the name must be alphabetic chars and min size 5 and max size 20
	ii. setPassword: Password must be with min size 8 and max size 20
	iii. Min balance is 1500
	c. Getter functions
	d. void deposit (double amount).
	e. void withdraw (double amount).
	f. void transferTo (double amount, Client& recipient).
	g. void checkBalance ().
	h. Display function
*/
static vector<Client> allClients;
static vector<Client>::iterator clientIt;
class Client : public Person
{
private:
	double balance ;
	static int id;
	int myID;

public:
	Client(const string& name, const string& password, double balance) :Person(name,password) {
		try
		{
			this->balance = Validation::checkMinBalance(balance);
		}
		catch (const std::exception& e)
		{
			cout << e.what();
		}
		
		id++;
		myID = id;
	}
	// Setters
	void setBalance(const double& balance) {
		this->balance = Validation::checkMinBalance(balance);
	}
	void setId(const int& id) {
		this->myID = myID;
	}
	// Getters
	double getBalance() {
		return this->balance;
	}
	int getId() { return myID; }
	// Methods
	void deposit(const double& amount) {
		if (amount > 0)
			this->balance += amount;
		else
			cout << "Cannot be zero or minus";
	}
	void withdraw(const double& amount) {
		if (amount > 0 && amount <= balance)
			this->balance -= amount;
		else
			cout << "The amount must bigger than 0 and smaller than the current balance";
	}
	void transferTo(const double& amount, Client& recipient) {
		if (amount > 0 && amount <= balance) {
			this->balance -= amount;
			recipient.balance += amount;
		}
			
		else
			cout << "The amount must bigger than 0 and smaller than the current balance";
	}
	void checkBalance() {
		cout << "The current balance is :" << this->balance << endl;
	}
	void Display() {
		
		Person::display();
		cout << "ID :" << this->myID << endl;
		cout << "Balance :" << this->balance << endl;

	}

};


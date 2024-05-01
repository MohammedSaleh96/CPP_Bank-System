#pragma once
#include<iostream>
#include"Person.h"
#include"Validation.h"
#include <exception>
#include<string>
using namespace std;

class Employee : public Person
{
protected:
	//Attributes:
	double salary;
	static int id;
    int myID;

public:
	//Constructors:
	Employee(string name,string password,double salary):Person(name,password) {
		this->salary = salary;
		id++;
		myID = id;
	}
	//Setters:
	void setSalary(double salary) {
			this->salary = salary;
	}
    void setId(const int& id) {
	this->myID = myID;
    }

	//Getters:
	double getSalary() {
		return this->salary;
	}
    int getId() { return myID; }
void addClient(Client& client) {
	allClients.push_back(client);
}
Client* searchClient(int id) {
	for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++)
	{
		if (clientIt->getID() == id) {
			return clientIt._Ptr;
		}
	}
	return NULL;
}
void listClient() {
	for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++)
	{
		clientIt->displayInfo();
	}
}
void editClient(int id, string name, string password, double balance) {
	searchClient(id)->setName(name);
	searchClient(id)->setPassword(password);
	searchClient(id)->setBalance(balance);
}

	//Methods:
	void displayInfo() {
		cout << "Emoloyee ID : " << this->id << endl;
		cout << "Emoloyee Name : " << this->name << endl;
		cout << "Emoloyee Salary : " << this->salary << endl;
		//=====if u want to check before display========
		// 
		//cout << "Emoloyee ID : " << this->id << endl;
		//try {
		//	Validation::checkName(this->name);
		//	cout << "Emoloyee Name : " << this->name << endl;
		//}
		//catch (exception& e) {
		//	cout << "Emoloyee Name : " << e.what();
		//}
		//
		//try {
		//	Validation::checkMinSalary(this->salary);
		//	cout << "Emoloyee Salary : " << this->salary << endl;
		//}
		//catch (exception e) {
		//	cout <<"Emoloyee Salary : "<< e.what();
		//}
	}


};

//==========NOTE and Explain===============
	//you can take object from Validation and use it in (try)
	//try {
		//	Validation v;
		//	cout << "Emoloyee Name : " <<v.checkName(this->name)<<endl;*/
		//}
		//catch (exception& e) {
		//	cout << "Emoloyee Name : " << e.what();
		//}
	//========or==================
	// 
	//ypu can usit it dirictly from class without object cus its static method and then print the name
	// 
	//try {
		//	Validation::checkName(this->name);
		//	cout << "Emoloyee Name : " << this->name << endl;
		//}
		//catch (exception& e) {
		//	cout << "Emoloyee Name : " << e.what();
		//}

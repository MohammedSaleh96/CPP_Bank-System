#pragma once
#include<iostream>
#include"Person.h"
#include"Validation.h"
#include <exception>
#include<string>
// Emp
// Validation
using namespace std;
class Admin : public Person
{
protected:
	//Attributes:
	double salary;
	static int id;
    int myID;
public:
	//Constructor
	//Admin() {
	//	this->salary = 0;
	//	id++;
	//}
	Admin(string name, string password, double salary) :Person(name, password) {
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

	//Getters
	
	double getSalary() {
		return this->salary;
	}
    int getId() { return myID; }
	void displayInfo() {
		cout << "ID : " << this->id << endl;
		cout << "Name : " << this->name << endl;
		cout << "Salary : " << this->salary << endl;

	}

};


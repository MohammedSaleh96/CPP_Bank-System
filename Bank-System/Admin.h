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
public:
	//Constructor
	//Admin() {
	//	this->salary = 0;
	//	id++;
	//}
	Admin(string name, string password, double salary) :Person(name, password) {
		this->salary = salary;
		id++;
	}
	//Setters:
	void setSalary(double salary) {
		this->salary = salary;
	}
	//Getters
	double getSalary() {
		return this->salary;
	}
	void displayInfo() {
		cout << "ID : " << this->id << endl;
		cout << "Name : " << this->name << endl;
		cout << "Salary : " << this->salary << endl;

	}

};


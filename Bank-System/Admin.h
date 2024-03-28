#pragma once
#include<iostream>
#include"Person.h"
#include"Validation.h"
#include <exception>
#include<string>
using namespace std;
class Admin : public Person
{
protected:
	//Attributes:
	double salary;
public:
	//Constructor
	Admin() {
		this->salary = 0;
	}
	Admin(int id, string name, string password, double salary) :Person(id, name, password) {
		this->salary = salary;

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


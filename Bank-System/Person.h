#pragma once
#include<iostream>
#include"Validation.h"
#include <exception>
#include<string>
//Employee Class and Client Class Inherent From Person Class
using namespace std;
class Person
{
protected:
	//Attributes:
	string name,password;
public:
	//Constructors:
	Person(const string& name, const string& password) {
		this->name = Validation::checkName(name);
		this->password = Validation::checkPassword(password);
	}
	//Setters:
	void setName(const string& name) {
		this->name = Validation::checkName(name);
	}
	void setPassword(const string& password) {
		this->password = Validation::checkPassword(password);	
	}
	//Getters:
	string getName() {
		return this->name;
	}
	string getPassword() {
		return this->password;
	}
	void display() {
		cout << "name :" << name << endl;
	}
};


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
	int id{};
public:
	//Constructors:
	Person() {
		this->id = 0;
	}
	Person(int id, string name, string password) {
		this->id = id;
		this->name = name;
		this->password = password;
	}
	//Seeters:
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	void setPassword(string password) {
		this->password = password;	
	}
	//Getters:
	int getId() {
		return this->id;
	}
	string getName() {
		return this->name;
	}
	string getPassword() {
		return this->password;
	}
	
};


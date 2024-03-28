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
public:
	//Constructors:
	Employee() {
		this->salary = 0;
	}
	Employee(int id, string name,string password,double salary):Person(id,name,password) {
		this->salary = salary;
	}
	//Seeters:
	void setSalary(double salary) {

		
			this->salary = salary;
			
		
		
	}
	//Getters:
	double getSalary() {
		return this->salary;
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
#pragma once
#include <exception>
#include <string>
#include <iostream>
using namespace std;
// ===NOTE==== :
	// 1-changed the class to public so i can accsess all funtion and check on them in while loop
	// 2- I added numName to alpha to so i can use it in do while loop without Erorr
	// so when i check i just check on one method not two
	// 3 I Added 2 more Validation methods for Password and Salary
class Validation
{
public:
	// Check Name Condition
	static bool checkNameCondition(const string& name) {
		// Check if name consists of alphabetic characters only
		for (char c : name) {
			if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
				throw exception("Name should be only Alphabitic");
				//return false; 
			}
		}
		// Check if name length is between 5 and 20 characters
		if (name.size() < 5 || name.size() > 20) {
			throw exception("Name should be more than 5 char and less than 20");
			//return false; 
		}

		return true; 
	}
	// Check PassWord 
	static bool numPassword(const string& password) {
		if (!(password.size() > 8 || password.size() <= 20))
			throw exception();
		else {
			return true;
		}	
	}
	static bool minBalance(const double& salary) {
		if (!(salary >= 1500))
			throw exception("Balance should be 1500 min");
		else
			return salary;
	}

	static bool minSalary(const double& salary) {
		if (salary>=5000)
			return true;
		else
			return false;
	}


	// Check for UserName
	static string checkName(const string& name) {
		try
		{
			if (checkNameCondition(name) == true)
				return name;
		}
		catch (const std::exception& e)
		{
			cout << e.what();
		}
	}
	//Check for Password
	static string checkPassword(const string& password) {
		try
		{
			if (numPassword(password))
				return password;
		}
		catch (const std::exception& e)
		{
			cout << e.what();
		}
		return "Invalid";
	}
	//Check for Salary
	static double checkMinSalary(const double& salary) {
		if (minSalary(salary))
			return salary;
		else
			throw exception("Salary should be at least 5000$\n");
	}
	//Check for Balance

	static double checkMinBalance(const double& balance) {
		try
		{
			if (minSalary(balance))
				return balance;
		}
		catch (const std::exception& e)
		{
			cout << e.what();
		}
		
	}
};



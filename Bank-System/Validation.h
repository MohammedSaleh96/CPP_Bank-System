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
	static bool alpha(const string& name) {
		for (char c : name) {
			if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || !(name.size() > 5 || name.size() < 20)) {
				return false;	
			}
		}
		return true;
		
	}
	/*static bool numName(const string& name) {
		if (name.size() > 5 && name.size() < 20)
			return true;
		else
			return false;
	}*/
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
	/*static string checkName(const string& name) {
		if (alpha(name) == true && numName(name) == true)
			return name;
		else
			throw exception("Unvalid name: the name should be alphabetic chars and min size 5 and max size 20\n");
	}*/

	static string checkName(const string& name) {
		if (alpha(name) == true)
			return name;
		else
			throw exception("Unvalid name: the name should be alphabetic chars and min size 5 and max size 20\n");
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



#include <iostream>
#include <exception>
#include "Validation.h"
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;

int main()
{
	// Example to Check the Validation Method "checkName"
	/*string name = "Mohamme7";
	string className;
	try
	{	
		className = Validation::checkName(name);
	}
	catch (exception& e)
	{
		cout <<e.what();
	}
	cout << className;
	*/

	//=====IMPORTANT========= Example to (Set and Input) Employee Data And check on data ===========
	//used Do While Loop to check on data (Validation) so if data not match the Validation requires
	// it show the msg and prevent the user go to next step. 

	/*Employee em;
	int id;
	string name{}, password{};
	double salary;
	cout << "Employee ID : ";
	cin >> id;
	em.setId(id);
	do
	{
		cout << "Employee Name : ";
		cin >> name;
		em.setName(name);

		try {
			Validation::checkName(name);
		}
		catch (exception e) {
			cout << e.what();
		}
		
	} while (!(Validation::alpha(name)));

	
	do
	{
		cout << "Employee Password : ";
		cin >> password;
		em.setPassword(password);

		try {
			Validation::checkPassword(password);
		}
		catch (exception e) {
			cout <<e.what();
		}
		
	} while (!(Validation::numPassword(password)));

	do
	{
		cout << "Employee Salary : ";
		cin >> salary;
		em.setSalary(salary);

		try {
			Validation::checkMinSalary(salary);
		}
		catch (exception e) {
			cout << e.what();
		}
		
	} while (!(Validation::minSalary(salary)));

	cout << "=======Employee Info======= : \n";
	em.displayInfo();
	*/
	/*
	======================Admin-Module=====================
	*/
	/*
	* ---Start---------CheckName-----------------
	Admin ad;
	int id;
	string name{};
	
	cout << "Admin ID : ";
	cin >> id;
	ad.setId(id);
	do
	{
		cout << "Admin Name : ";
		cin >> name;
		ad.setName(name);

		try {
			Validation::checkName(name);
		}
		catch (exception e) {
			cout << e.what();
		}

	} while (!(Validation::alpha(name)));
	----End-------CheckName---------------------
	*/
/*
-------Start-----CheckPassword------
		Admin ad;
		string password{};
do
{
	cout << "Admin Password : ";
	cin >> password;
	ad.setPassword(password);

	try {
		Validation::checkPassword(password);
	}
	catch (exception e) {
		cout << e.what();
	}

} while (!(Validation::numPassword(password)));




-------End-----CheckPassword-------

*/
/*
* ----Start----CheckSalary---------
		Admin ad;
		double salary;
do
{
	cout << "Admin Salary : ";
	cin >> salary;
	ad.setSalary(salary);

	try {
		Validation::checkMinSalary(salary);
	}
	catch (exception e) {
		cout << e.what();
	}

} while (!(Validation::minSalary(salary)));


* ----End----CheckSalary-----------

*/
	

}

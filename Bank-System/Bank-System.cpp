#include <iostream>
#include <exception>
#include "Validation.h"
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "Client.h"
#include "Parser.h"
#include "FilesHelper.h"
#include "FileManager.h"
#include<vector>
#include<string>
#include "Screens.h"
using namespace std;

int main()
{


	//string name = "30,MohammedSaleh,001122,5000";
	//Client c = Parser::parseToClient(name);
	//FilesHelper::saveClient(c);
	////FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");

	//Admin a = Parser::parseToAdmin(name);
	//FilesHelper::saveAdmin(a);

	//Employee e = Parser::parseToEmployee(name);
	//FilesHelper::saveEmployee(e);

	//FilesHelper::getClients();
	Screens::runApp();
	
return 0;
}

/*
	Phase1 Comments
		1- Class Admit should inherit from Employee (take the salary from it as well)
		2- Class Empolyee should take the data and validate it before assignment
		3- Class Validation should:
			3.1- Seperate the bool methods, make the exception for each (throw exception)
			3.2- In the main validation methods, collect the bool methods, print the exception message (cout<< e.what();)
*/

#pragma region ToDo
// 1- Delete the Default Constructor ----> the Object should not be created without data
// 2- Validate the data before assign it in the class.

// Brain Storming
// How the user can log into his account??
#pragma endregion
#pragma region SalehValidation

#pragma endregion




#pragma region CommentsToValidateOurCode
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
#pragma endregion

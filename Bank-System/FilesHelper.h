#pragma once
#include <vector>
#include <string>
#include "Client.h"
#include "Admin.h"
#include "Employee.h"
#include <fstream>

class FilesHelper
{
public:
	// a. static void saveLast(string fileName, int id)
	// b. static int getLast(string fileName).
	// c. static void saveClient(Client c).
	// d. static void saveEmployee(string fileName, string lastIdFile, Employee e).
	// e. static void getClients().
	// f. static void getEmployees().
	// g. static void getAdmins().
	// h. static void clearFile(string fileName, string lastIdFile).

	// c. By Saleh
	static void saveClient(Client c) {
		auto status = ios::in | ios::out | ios::app;   // ios::trunc ---> to overwrite 

		string filePath = "Clients.txt";

		fstream file_handler(filePath, status);
		if (file_handler.fail()) {
			cout << "Cannot open the file \n";
			return;
		}

		// write to file 
		file_handler << c.getId()<< "," << c.getName()<< "," << c.getPassword() << "," << c.getBalance() << endl;
		file_handler.close();
		cout << "The Name has been successfully added"<< endl;
	}
	static void saveAdmin(Admin a) {
		auto status = ios::in | ios::out | ios::app;   // ios::trunc ---> to overwrite 

		string filePath = "Admin.txt";

		fstream file_handler(filePath, status);
		if (file_handler.fail()) {
			cout << "Cannot open the file \n";
			return;
		}

		// write to file 
		file_handler << a.getId() << "," << a.getName() << "," << a.getPassword() << "," << a.getSalary() << endl;
		file_handler.close();
		cout << "The Name has been successfully added" << endl;
	}
	static void saveEmployee(Employee a) {
		auto status = ios::in | ios::out | ios::app;   // ios::trunc ---> to overwrite 

		string filePath = "Employee.txt";

		fstream file_handler(filePath, status);
		if (file_handler.fail()) {
			cout << "Cannot open the file \n";
			return;
		}

		// write to file 
		file_handler << a.getId() << "," << a.getName() << "," << a.getPassword() << "," << a.getSalary() << endl;
		file_handler.close();
		cout << "The Name has been successfully added" << endl;
	}
	static void clearFile(string fileName, string lastIdFile) {
		fstream file1, file2;
		file1.open(fileName, ios::out);
		file1.close();
		file2.open(lastIdFile, ios::out);
		file2 << 0;
		file2.close();
	}
	static void getClients() {
		string fileName = "Clients.txt";
		ifstream inputFile(fileName);

		if (!inputFile.is_open()) {
			cerr << "Error: Unable to open file " << fileName << endl;
			return;
		}

		vector<string> lines;

		string line;
		while (getline(inputFile, line)) {
			lines.push_back(line);
		}

		inputFile.close();

		
		for (const auto& line : lines) {
			cout << line << endl;
		}
	}
	static void getEmpolyees() {
		string fileName = "Employee.txt";
		ifstream inputFile(fileName);

		if (!inputFile.is_open()) {
			cerr << "Error: Unable to open file " << fileName << endl;
			return;
		}

		vector<string> lines;

		string line;
		while (getline(inputFile, line)) {
			lines.push_back(line);
		}

		inputFile.close();


		for (const auto& line : lines) {
			cout << line << endl;
		}
	}
	static void getAdmin() {
		string fileName = "Admin.txt";
		ifstream inputFile(fileName);

		if (!inputFile.is_open()) {
			cerr << "Error: Unable to open file " << fileName << endl;
			return;
		}

		vector<string> lines;

		string line;
		while (getline(inputFile, line)) {
			lines.push_back(line);
		}

		inputFile.close();


		for (const auto& line : lines) {
			cout << line << endl;
		}
	}
};




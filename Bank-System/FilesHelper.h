#pragma once
#include <vector>
#include <string>
#include "Client.h"
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
	}
};


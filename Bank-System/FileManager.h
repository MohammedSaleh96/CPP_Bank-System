#pragma once
#include <vector>
#include <string>
#include "Client.h"
#include "Admin.h"
#include "Employee.h"
#include <fstream>
#include "FilesHelper.h"

class FileManager  {
public:
	// Add Classes
	static void addClient(Client client) {
		FilesHelper::saveClient(client);
	}
	static void addEmpolyee(Employee employee) {
		FilesHelper::saveEmployee(employee);
	}
	static void addAdmin(Admin admin) {
		FilesHelper::saveAdmin(admin);
	}

	// Get Classes from .txt
	vector<Client> getallClients() {
		string fileName = "Clients.txt";
		ifstream inputFile(fileName);

		/*if (!inputFile.is_open()) {
			cerr << "Error: Unable to open file " << fileName << endl;
			return;
		}*/

		vector<string> lines;

		string line;
		while (getline(inputFile, line)) {
			lines.push_back(line);
		}

		inputFile.close();

		vector<Client> allClients;

		for (const auto& line : lines) {
			//cout << line << endl;
			Client c = Parser::parseToClient(line);
			allClients.push_back(c);
		}
		return allClients;
	}
	static void getallEmployees() {
		FilesHelper::getEmpolyees();
	}
	static void getallAdmin() {
		FilesHelper::getAdmin();
	}

	// Remove Classes from .txt
	static void removeAllClients() {
		FilesHelper::clearFile("Clients.txt", "ClientLastId.txt");
	}
	static void removeAllEmployees() {
		FilesHelper::clearFile("Employees.txt", "EmployeeLastId.txt");
	}
	static void removeAllAdmins() {
		FilesHelper::clearFile("Admins.txt", "AdminLastId.txt");
	}

};

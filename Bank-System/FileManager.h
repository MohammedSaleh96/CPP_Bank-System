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
	static void getClients() {
		FilesHelper::getClients();
	}
	static void getEmployees() {
		FilesHelper::getEmpolyees();
	}
	static void getAdmin() {
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

class FileManager
{
};

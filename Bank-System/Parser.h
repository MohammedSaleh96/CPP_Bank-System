#pragma once
#define PARSER_H

#include <vector>
#include <string>
#include "Client.h"

#include <sstream>
using namespace std;
class Parser
{
public:
	// Requirements
	//a. static vector<string> split(string line).
	//b. static Client parseToClient(string line).
	//c. static Employee parseToEmployee(string line).
	//d. static Admin parseToAdmin(string line).

	// a.
	static vector<string> split(string line){
		// Line Example(30,Mohammed Saleh,001122,5000)
		istringstream iss(line);
		// Variables
		int id=0;
		string name;
		double password=0, salary=0;

		// Split and push to vector
		vector <string> newList;
		string part;
		while (getline(iss, part, ',')) {
			newList.push_back(part);
		}
		return newList;
	}

	 //b.
	static Client parseToClient(string line) {
		vector<string> clientInfo = split(line);

		int id = stoi(clientInfo.at(0));      // Parse ID as integer
		string name = clientInfo.at(1);       // Name is already a string
		string password = clientInfo.at(2);   // Password is already a string
		double salary = stod(clientInfo.at(3));  // Parse salary as double

		Client parsedClient(name, password, salary);
		parsedClient.setId(id);
		return parsedClient;
	}

};


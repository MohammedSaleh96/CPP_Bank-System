#pragma once
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "Client.h"
#include "Parser.h"
#include "FilesHelper.h"
#include "FileManager.h"
#include<vector>
#include<string>
class ClientManager
{
public:
	static void printClientMenu() {
        int choice;
        bool exit = false;

        while (!exit) {
            cout << "Choose an option:" << endl;
            cout << "1. Print numbers 1 to 5" << endl;
            cout << "2. Print numbers 6 to 10" << endl;
            cout << "3. Print numbers 11 to 15" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                system("cls"); // Clear screen
                //printRange(1, 5);
                break;
            case 2:
                system("cls"); // Clear screen
                //printRange(6, 10);
                break;
            case 3:
                system("cls"); // Clear screen
                //printRange(11, 15);
                break;
            case 4:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            }

            if (!exit) {
                cout << "Press any key to continue...";
                cin.ignore(); // Clear input buffer
                cin.get();    // Wait for user to press a key
                system("cls"); // Clear screen for Windows
            }
        }
	}
	static void updatePassword(Person* person) {

	}
	static Client* login(int id, string password) {

	}
	static bool clientOptions(Client* client) {

	}
};


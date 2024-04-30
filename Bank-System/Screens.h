#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include "ClientManager.h"
#include "FileManager.h"
#include <vector>
#include "Client.h"
using namespace std;



class Screens
{
public:
    static vector<Client> allClients;

	static void bankName() {
        
	}
	static void runApp() {
        int choice;
        bool exit = false;

        // Read Data from the text files
        FileManager filemanager;
        allClients = filemanager.getallClients();

        while (!exit) {
            cout << "Choose an option:" << endl;
            cout << "1. Admin" << endl;
            cout << "2. Employee" << endl;
            cout << "3. Client" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;


            int id=0;
            string pass= "";
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
                //allClients.empty();
                

                // Validate the Id and Password
               
                cout << "Please enter your Id :";
                cin >> id;
                cout << "Please enter your password :";
                cin >> pass;
                if (id <= allClients.size() )
                {
                    if (pass == allClients.at(id).getPassword()) {
                        ClientManager::printClientMenu(allClients.at(id-1));
                        //cout << allClients.size() << endl;
                    }
                    else {
                        cout << "Unvalid Passwork !:";
                    }
                }
                else {
                    cout << "Unvalid ID !";
                }
                
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
};


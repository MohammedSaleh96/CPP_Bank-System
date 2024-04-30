#pragma once
#include "Person.h"
#include "Employee.h"
#include "Admin.h"
#include "Client.h"
#include "Parser.h"
#include "FilesHelper.h"
#include "FileManager.h"
//#include "Screens.h"
#include <vector>
#include <string>
class ClientManager
{
public:
	static void printClientMenu( Client client) {
        int choice;
        bool exit = false;

        // Variables
        int amount =0;
        int id =0;
        while (!exit) {
            cout << "Choose an option:" << endl;
            cout << "1. Display my Info" << endl;
            cout << "2. Check balance" << endl;
            cout << "3. Update Password" << endl;
            cout << "4. Withdraw" << endl;
            cout << "5. Deposit" << endl;
            cout << "6. Transfer amount" << endl;
            cout << "7. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1: // Display Information
                system("cls"); // Clear screen
                client.Display();
                break;
            case 2: // Check balance
                system("cls"); // Clear screen
                client.checkBalance();
                break;
            case 3: // Update Password
                system("cls"); // Clear screen
                //printRange(11, 15);
                break;
            case 4: //Withdraw
                system("cls"); // Clear screen
                cout << "Please enter the required amount :";
                // validate the amount
                if (cin >> amount)
                {
                    client.withdraw(amount);
                    cout << "Withdrawal of $" << amount << " successful." << endl;
                    cout << "Your new balance is :" << client.getBalance() <<endl; 
                }
                else{
                    cout << "Error: Unvalid Input :";
                }
                
                break;
            case 5: // Deposit
                system("cls"); // Clear screen
                cout << "Please enter the required amount :";
                // validate the amount
                if (cin >> amount)
                {
                    client.deposit(amount);
                    cout << "Deposit of $" << amount << " successful." << endl;
                    cout << "Your new balance is :" << client.getBalance() << endl;
                }
                else {
                    cout << "Error: Unvalid Input :";
                }
                break;
            case 6:
                system("cls"); // Clear screen
                //cout << "Please enter the other account Id :" << endl;
                //cin >> id;
                //cout << "Please enter the amount, you would like to transfer :" << endl;
                //cin >> amount;
                ////and id < Screens::allClients.size()
                //if (id >= 0 )
                //{
                //    client.transferTo(amount, Screens::allClients.at(id-1));
                //    cout << "The transfer has been succeed, your current balance is " << client.getBalance() << endl;
                //}
                //else {
                //    cout << "Unvalid Id " << endl;
                //}
                break;
            case 7:
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


// BankSystem.cpp : AhmedAymanAbdelHalim

#include <iostream>
#include <cctype>
#include<string>
using namespace std;
class Admin {
private:
	int id;
	string name, password;
	double balance;
public:
	Admin() {
		id = balance = 0;
	}
	Admin(int id,string n,string p,double b) {
		setId(id);
		setName(n);
		setPassword(p);
		setBalance(b);
	}
	void setId(int id) {
		this->id = id;
	}
	int getId() {
		return this->id;
	}
	void setName(const string& n) {
		if (n.size() < 5 || n.size() > 20) {
			cout << "Error: Name must be between 5 and 20 alphabetic characters." << endl;
			return;
		}

		for (char c : n) {
			if (!isalpha(c)) {
				cout << "Error: Name must contain only alphabetic characters." << endl;
				return;
			}
		}
		this->name = n;
	}

	
	string getName() {
		return this->name;
	}
	void setPassword(const string& password) {
		if (password.size() >= 8 && password.size() <= 20) {
			this->password = password;
		}
		else {
			cout << "Invalid password must be between 8 and 20 characters" << endl;
		}
	}
	string getPassword() {
		return this->password;
	}
	void setBalance(const double& balance) {
		if (balance > 5000) {
			this->balance = balance;
		}
		else {
			cout << "============Min Balance 5000==================" << endl;
			this->balance = 0;
		}
	}
	double getBalance(const double& balance) {
		return this->balance;
	}
	void display() {
		cout << "id = " << id << "\nName = " << name << "\nPassword = " << password << "\nBalance = " << balance;;
	}
};
int main()
{
	Admin a(22,"ahmed111", "21341124", 2000);
	a.display();
	
  
}

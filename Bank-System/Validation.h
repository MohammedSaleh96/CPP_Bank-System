#pragma once
#include <exception>
#include <string>
using namespace std;

class Validation
{
private:
	static bool alpha(const string& name) {
		for (char c : name) {
			if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
				return false;
			}
		}
		return true;
	}
	static bool numName(const string& name) {
		if (name.size() > 5 && name.size() < 20)
			return true;
		else
			return false;
	}
public:
	// Check for UserName
	static string checkName(const string& name) {
		if (alpha(name) == true && numName(name) == true)
			return name;
		else
			throw exception("Unvalid name: the name should be alphabetic chars and min size 5 and max size 20");
	}
};



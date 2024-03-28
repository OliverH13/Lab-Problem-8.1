
#include <iostream>
#include <string>

using namespace std;

int count_character(string str);

int main() {
	string input;
	
	while (true) {

		cout << "Enter a string or Q to quit: ";
		
		getline(cin, input);
		if (input == "Q") break;

		cout << "String length: " << count_character(input) << endl;

	}

}

int count_character(string str) { return str.length(); }
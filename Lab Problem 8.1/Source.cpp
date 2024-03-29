
#include <iostream>
#include <string>

using namespace std;

int count_vowel(string str);
int convert(char vowel);

int main() {
	string input;

	while (true) {

		cout << "Enter a string or Q to quit: ";
		
		getline(cin, input);
		if (input == "Q") break;

		cout << "Vowel count: " << count_vowel(input) << endl;
	}
	return 0;
}

int count_vowel(string str) {

    if (str.empty()) return 0;
   
    int length_of_string = static_cast<int>(str.length());

    int sum = convert(str[length_of_string - 1]);

    for (int i = length_of_string - 2; i >= 0; --i) {

        if (convert(str[i]) < convert(str[i + 1]))
            sum -= convert(str[i]);
        else
            sum += convert(str[i]);
    }
    return sum;
}

int convert(char vowel) {
    switch (vowel) {
    case 'A':
        return 1;
    case 'a':
        return 1;
    case 'E':
        return 1;
    case 'e':
        return 1;
    case 'I':
        return 1;
    case 'i':
        return 1;
    case 'O':
        return 1;
    case 'o':
        return 1;
    case 'U':
        return 1;
    case 'u':
        return 1;
    default:
        return 0;
    }
}
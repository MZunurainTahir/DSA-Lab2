#include <iostream>
#include <cstring> 

using namespace std;

int main() {
	int length;

	cout << "Enter the length of the string: ";
	cin >> length;

	char *str = new char[length + 1];

	cout << "Enter the string: ";
	cin.ignore(); 
	cin.getline(str, length + 1);

	for (int i = 0; i < length / 2; ++i) {
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}

	cout << "Reversed string: " << str << endl;

	
	delete[] str;

	return 0;
}

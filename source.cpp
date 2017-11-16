#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//This program gets a word from the user 
//prints it and individual characters

int main() {
    string word;

	cout << "Enter a word: ";
	cin >> word;

	cout << "You entered " << word << endl;
	cout << "Individual characters:\n";
	for(int i=0; i<word.length(); i++)
        cout << word[i] << endl;
}

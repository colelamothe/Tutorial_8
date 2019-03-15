// Tutorial #8 
// Cole Lamothe 100711084

#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

int main() {
	// question 1
	/*
	// variable declaration
	char choice = (' ');
	double baseA = 19.95;
	double baseB = 34.95;
	double baseC = 59.95;
	double rateA = 0.08;
	double rateB = 0.06;
	double rateC = 0;
	string address;
	int minutesUsed;
	double billTotal;
	int houseNumber;
	string streetName;
	string city;
	double savings;

	while (choice != 'A' && choice != 'B' && choice != 'C') {
		cout << "Please enter your rate plan: A, B, or C " << endl;
		choice = getchar();
		choice = toupper(choice);
	}
	

	cout << "Please enter your house number: " << endl;
	cin >> houseNumber;

	cout << "Please enter your street name: " << endl;
	cin >> streetName;

	cout << "Please enter your city: " << endl;
	cin >> city;

	do {
		cout << "Please enter the total number of minutes used: " << endl;
		cin >> minutesUsed;
		
		if (minutesUsed < 0) {
			cout << "Please enter a positive number of minutes" << endl;
		}

	} while (minutesUsed < 0);

	switch (choice) {
	case ('A'):
		billTotal = baseA + (minutesUsed*rateA);
		break;
	case('B'):
		billTotal = baseB + (minutesUsed*rateB);
		break;
	case('C'):
		billTotal = baseA + (minutesUsed*rateA);
		break;
	default:
		cout << "Please enter a valid plan selection." << endl;
		break;
	}
	system("CLS");
	cout << "Rate Plan " << choice << endl;
	cout << houseNumber << " " << streetName << " " << city << endl;
	cout << "Your bill total is: " << endl;
	cout << "$" << billTotal << endl;
	if (billTotal > (baseB + (minutesUsed*rateB))) {
		cout << "By purchasing B plan you could have saved $" << billTotal - (baseB + (minutesUsed*rateB)) << endl;
	}
	if (billTotal > (baseC + (minutesUsed*rateC))) {
		cout << "By purchasing C plan you could have saved $" << billTotal - (baseC + (minutesUsed*rateC)) << endl;
	}
	*/
	// question 2
	string userInput;
	int choice;
	int cipherKey = 5;
	char currentLetter;
	char changedLetter;

	do {
		cout << "Welcome to ENGR1200U Cryptographic Techniques Program" << endl;
		cout << "Please enter your selection: " << endl;
		cout << "\t1. Encrypt" << endl;
		cout << "\t2. Decrypt" << endl;
		cin >> choice;
	} while (choice != 1 && choice != 2);
	cin.ignore();

	cout << "Please enter your string of characters: " << endl;
	getline(cin, userInput);
	
	cout << "Please enter your cipher key: " << endl;
	cin >> cipherKey;
	
	
	if (choice == 1) { // encryption
		for (int i = 0; i < userInput.length(); i++) {
			currentLetter = toupper(userInput.at(i)); // gets the characters in order and changes them to uppercase
			if (currentLetter != ' ') {
				changedLetter = ((currentLetter - 'A' + cipherKey) % 26 + 'A');
				cout << changedLetter;
			}
			else {
				cout << " "; // we do not want to convert spaces
			}
		}
	}
	else if (choice == 2) {
		for (int i = 0; i < userInput.length(); i++) {
			currentLetter = toupper(userInput.at(i)); // gets the characters in order and changes them to uppercase
			if (currentLetter != ' ') {
				changedLetter = (currentLetter + 'A'-cipherKey) %26 +'A';
				cout << changedLetter;
			}
			else {
				cout << " "; // we do not want to convert spaces
			}
		}
	}

	cout << endl;
	system ("pause");
	return 0;
}
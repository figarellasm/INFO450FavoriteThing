#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>
#include "dog.h"
#include "doglist.h"

dog* inputDog() //input dog function
{
	string name;
	string breed;
	string owner;
	string vaccinated;
	string needsHome;

	cout << "What is the dog's name? ";
	cin >> name;
	cout << "What breed is " << name << "? ";
	cin >> breed;
	cout << "Who currently cares for " << name << "? ";
	cin >> owner;
	cout << "Is " << name << " vaccinated? (yes/no)";
	cin >> vaccinated;
	cout << "Does " << name << " need a forever home? (yes/no)";
	cin >> needsHome;

	dog* r = new dog(name, breed, owner, vaccinated == "yes", needsHome == "yes");

	return r;

}

int main(int argc, const char * argv[]) {
	dogList list;
	void printWelcome();
	bool quit = false;
	while (!quit)
	{
		cout << endl;
		cout << "Please choose an option: " << endl;
		cout << "1: Enter favorite dogs" << endl;
		cout << "2: Print favorite dogs" << endl;
		cout << "3: Remove bad dogs" << endl;
		cout << "4: Exit program" << endl;
		int option;
		cin >> option;
		bool done = false;
		
		switch (option) {
		case 1:
			while (!done)
			{
				cout << endl;
				cout << "Please choose an option: " << endl;
				cout << "1: Enter fave dog" << endl;
				cout << "2: Finished" << endl;
				cin >> option;
				switch (option)
				{
					case 1: 
						if (!list.insert(inputDog()))
						{
							cout << "This good boy is already in the list." << endl;
						}
						break;
					case 2:
						done = true;
						break;
					default:
						cout << "Invalid option." << endl;
						cin.clear();
						cin.ignore(INT_MAX, '\n');
						break;
				}
			}
			break;
		case 2: 
			list.printList();
			break;
		case 3:
			if (!list.remove(inputDog()))
			{
				cout << "Bad boy already removed." << endl;

			}
			break;
		case 4:
			quit = true;
			break;
		default:
			cout << "Invalid option entered" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			break;
		}
	}
	return 0;
}



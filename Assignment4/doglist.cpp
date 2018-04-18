#include "stdafx.h"
#include <iostream>
using namespace std;
#include "doglist.h"

void dogList::printList()//scope of the function declaration must be same as class name that it belongs to
{
	for (int i = 0; i < 100; i++)
	{
		if (inputList[i] != NULL)
		{
			cout << *(inputList[i]) << endl;
		}
	}
}
void dogList::printWelcome()
{
	cout << "Hello! Welcome to Suz's favorite dog tracking application. Use the menues to add new doggos." << endl;
}
bool dogList::contains(dog* d)
{
	for (int i = 0; i < 100; i++)
	{
		if (inputList[i] != NULL)
		{
			if (*(inputList[i]) == *d)
			{
				return true;
			}
		}
	}

	return false;
}

bool dogList::insert(dog* d)
{
	if (!contains(d))
	{
		for (int i = 0; i < 100; i++)
		{
			if (inputList[i] == NULL)
			{
				inputList[i] = d;
				return true;
			}
		}
	}
	return false;
}

bool dogList::remove(dog* d)
{
	for (int i = 0; i < 100; i++)
	{
		if (inputList[i] != NULL)
		{
			if (*(inputList[i]) == *d)
			{
				delete inputList[i];
				inputList[i] = NULL;

				return true;
			}
		}
	}

	return false;
}
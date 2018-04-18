#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "dog.h"

class dogList {
public:
	dogList()
	{
		inputList = new dog*[100];
		for (int i = 0; i < 100; i++)
			inputList[i] = NULL;
	}

	//functions of class doglist
	void printList();
	void printWelcome();
	bool contains(dog* d);
	bool insert(dog* d);
	bool remove(dog* d);


private: 
	dog** inputList;
};
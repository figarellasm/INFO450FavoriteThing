#pragma once
#include "stdafx.h"
#include <string>//string header to use strings


class dog {

public://public variables of the dog class that can be accessed by other classes
	dog(string name, string breed, string owner, bool vaccinated, bool needsHome)
	{
		inputName = name;
		inputBreed = breed; 
		inputOwner = owner;
		inputVaccinated = vaccinated;
		inputNeedsHome = needsHome;

	}

	bool operator==(const dog& rhs)//bool operator for right hand side (rhs)
	{
		return rhs.inputName == this->inputName &&
			rhs.inputBreed == this->inputBreed;
	}

	friend ostream& operator<<(ostream& os, const dog& d);

private:
	string inputName;
	string inputBreed;
	string inputOwner;
	bool inputVaccinated;
	bool inputNeedsHome;

};

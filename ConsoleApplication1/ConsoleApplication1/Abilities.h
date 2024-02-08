#pragma once
#include<iostream>
#include<vector>
#include "PokeType.h"
using namespace std;

class Abilities
{
private :
	string aName;
	int dmgAmount;
	PokeType aType;
	int nbUse;


public :

	Abilities() : aName(""), dmgAmount(0), aType(PokeType::Normal), nbUse(0){}
	Abilities(const string& aName, int dmgAmount, PokeType aType, int nbUse) ;
	
	void DisplayName(Abilities ability);

};


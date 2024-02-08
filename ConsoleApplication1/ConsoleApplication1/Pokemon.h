#pragma once
#include<iostream>
#include<vector>
#include"Abilities.h";
#include "PokeType.h"
using namespace std;

class Pokemon
{
private :
	string name;
	string description;
	PokeType type;
	int level;
	int healthpoints;
	vector<Abilities> abilitiesSet;

public:
	Pokemon();
	Pokemon(string pName, int type, int level);
	void SetPokemonStats(PokeType abilityType);
	void Pokedex();
	void OutPokeball();
	void InPokeball();
	void Attack();
	void TakeDamage();
	void Rest();
	void Faint();
};


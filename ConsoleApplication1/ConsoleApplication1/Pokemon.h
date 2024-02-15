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
	Pokemon(string pName, PokeType pType, int hp, vector<Abilities> movesSet);
	Abilities ChooseAbilities(PokeType pkmType);
	void SetPokemonStats(PokeType ability);
	void Pokedex();
	string PokeName();
	void DisplayMoves();
	//void InPokeball();
	//void Attack();
	//void TakeDamage();
	//void Rest();
	//void Faint();
	
};


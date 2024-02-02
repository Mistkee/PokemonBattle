#pragma once
#include<iostream>
#include"PokeType.h";
using namespace std;

class Pokemon
{
private :
	string name;
	string description;
	/*PokeType*/ string type;
	int level;
	int healthpoints;
	string abilities[4];

public:
	Pokemon(string pName, string type, int level);
	void SetPokemonStats();
	void Pokedex();
	void OutPokeball();
	void InPokeball();
	void Attack();
	void TakeDamage();
	void Rest();
	void Faint();
};


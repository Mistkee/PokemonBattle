#pragma once
#include<iostream>
#include"PokeType.h";
using namespace std;

class Pokemon
{
private :
	string name;
	string description;
	PokeType type;
	int level;
	int healthpoints;
	string abilities[4];

public:
	Pokemon();
	Pokemon(string pName, int type, int level);
	void SetPokemonStats();
	void Pokedex();
	void OutPokeball();
	void InPokeball();
	void Attack();
	void TakeDamage();
	void Rest();
	void Faint();
};


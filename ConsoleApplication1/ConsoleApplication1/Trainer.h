#pragma once
#include<iostream>
#include"Pokemon.h";
#include<vector>;
using namespace std;

class Trainer
{
private :

	string firstName;
	string lastName;
	string catchPhrase;
	int money;
	int lifePoints;
	vector<Pokemon> teams;
	int pokeballs;

public :

	Trainer();
	Trainer(string fName, string lName, string cPhrase, vector<Pokemon> tTeams);
	void TeamIntroduction();
	void Introduction();
	void GetPokemonInTeam(int pokemons);
	vector <Pokemon> Team();
	void ThrowPokemon(int pokemons);
	//void CapturePokemon(Pokemon wildPokemon);
	//void SwitchPokemon();
	//void AttackWithPokemon();

};


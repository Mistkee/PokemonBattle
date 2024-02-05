#pragma once
#pragma once
#include <string>
#include<iostream>
#include"Pokemon.h";
#include <cstdlib>
#include <cstring>
#include <fstream>
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
	void Introduction();
	void ChallengeTrainer(Trainer trainer);
	void CapturePokemon(Pokemon wildPokemon);
	void SwitchPokemon();
	void AttackWithPokemon();

};


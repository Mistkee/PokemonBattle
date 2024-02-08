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
	Trainer(string fName, string lName, string cPhrase, vector<Pokemon> teams);
	void Introduction();
	void ChallengeTrainer(Trainer trainer);
	void CapturePokemon(Pokemon wildPokemon);
	void SwitchPokemon();
	void AttackWithPokemon();

};


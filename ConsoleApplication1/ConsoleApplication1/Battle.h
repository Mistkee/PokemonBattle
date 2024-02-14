#pragma once
#include<iostream>
#include"Trainer.h";
#include<vector>;
using namespace std;

class Battle
{

private:

	Trainer& mainCharacter;

public:

	Battle();
	Battle(Trainer& maincharacter);
	void Adventure(Trainer& mainCharacter);
	void ChallengeTrainer(Trainer& mainCharacter);
};
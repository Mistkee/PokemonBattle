#pragma once
#include<iostream>
#include"Trainer.h";
using namespace std;


class Battle
{

private:
	Trainer thePlayer;


public:

	Battle();
	Battle(Trainer mainCharacter);
	void Adventure();
	void BattleTrainer();

};
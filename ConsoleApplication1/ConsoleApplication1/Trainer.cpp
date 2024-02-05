#include "Trainer.h"
#include "Pokemon.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;


Trainer :: Trainer()
{
	int nbPokemon;
	

	cout << "What's your first name ?"<<endl;
	cin >> firstName;

	cout << "What's your last name ?" << endl;
	cin >> lastName;

	cout << "And what's your catch phrase ?" << endl;
	cin.ignore();
	getline(cin,catchPhrase);

	cout << "Alright and how much money do you have ?" << endl;
	cin >> money;

	cout << "What about your pokeballs ? How much do you have ?" << endl;
	cin >> pokeballs;

	cout << "Okay time to talk about the most important things, first how many Pokemon do you have ?" << endl;
	cin >> nbPokemon;

	for (int i; i < nbPokemon; i++)
	{
		cout << "Please enter the information for Pokemon " << i;
		cout << "What's name ?" << endl;
		cin >> pName;
		
	}
	Pokemon pokemon = Pokemon(pName, pType, pLevel);
}

void Trainer::Introduction()
{
	cout << endl << "Hey ! The name is " << firstName << " " << lastName << " !" << endl << catchPhrase << endl << "Anyway, if you want to challenge me let's get started !" << endl;
}

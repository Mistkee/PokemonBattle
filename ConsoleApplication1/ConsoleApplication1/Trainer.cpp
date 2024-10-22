#include "Trainer.h"
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

	for (int i = 0; i < nbPokemon; i++)
	{
		Pokemon pokemon = Pokemon();
		teams.push_back(pokemon);
	}
	
	cout << endl << "Hey ! The name is " << firstName << " " << lastName << " !" << endl << catchPhrase << endl << "Anyway, if you want to challenge me let's get started !" << endl;
	cout << "We're all set ! Time to begin your advendure !" << endl;
}

Trainer::Trainer(string fName, string lName, string cPhrase, vector<Pokemon> tTeams)
{
	firstName = fName;
	lastName = lName;
	catchPhrase = cPhrase;
	teams = tTeams;
}

void Trainer::TeamIntroduction()
{
	
	for (int i= 0; i < teams.size(); i++)
	{
		teams[i].Pokedex();	
	}
}

void Trainer::Introduction()
{
	cout << endl << "Hey ! The name is " << firstName << " " << lastName << " !" << endl << catchPhrase << endl << "Anyway, if you want to challenge me let's get started !" << endl;
}

void Trainer::GetPokemonInTeam(int pokemons)
{
	cout << teams[pokemons].PokeName();
}

vector <Pokemon> Trainer::Team()
{
	return teams;
}

void Trainer::ThrowPokemon(int pokemons)
{
	teams[pokemons].DisplayMoves();
}

#include "Pokemon.h"
#include <sstream>
#include <map>
using namespace std;

Pokemon::Pokemon()
{
	cout << "What's the name of your Pokémon ?" << endl;
	cin >> name;

	cout << "What's its type ? \n 0 : Normal \n 1 : Fire \n 2 : Water \n 3 : Grass : \n 4 : Electric \n 5 : Ice \n 6 : Fighting \n 7: Poison \n 8 : Ground \n 9 : Flying\n 10 : Psychic \n 11 : Bug \n 12 : Rock\n 13 : Ghost\n 14 : Dragon \n 15 : Dark\n 16 : Steel \n 17 : Fairy" << endl;
	int pType;
	cin >> pType;
	for (int i = 0; i < 18; i++)
	{
		if (pType == i)
		{
			type = PokeType(i);
		}
	}

	cout << "How many levels does it has ?" << endl;
	cin >> level;

	description = "Pokemon name: " + name + "\n" + "Lvl: " + to_string(level);

	SetPokemonStats(type);
}

void Pokemon::SetPokemonStats(PokeType abilityType)
{
	Abilities abilities = Abilities();
	
	abilitiesSet.push_back(abilities.ChooseAbilities(type));
}

void Pokemon::Pokedex()
{
	
	cout << description << endl;
	for (int i = 0; i < abilitiesSet.size(); i++)
	{
		abilitiesSet[i].DisplayName(abilitiesSet[i]);
	}
	
}

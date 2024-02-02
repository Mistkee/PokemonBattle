#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon(string pName, string pType, int pLevel)
{
	name = pName;
	level = pLevel;
	type = pType;
}

void Pokemon::SetPokemonStats()
{

	/*for (int i; i < 18 ; i++ )
	{
		if (type == (PokeType)i)
		{
			description = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH";
		}
	}*/
}

void Pokemon::Pokedex()
{
	description = name + "\n" + type + "\n";
	cout << description << endl << level;
	
}

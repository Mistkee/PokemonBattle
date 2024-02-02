#include "Pokemon.h"
#include <map>
using namespace std;

Pokemon::Pokemon(string pName, int pType, int pLevel)
{
	name = pName;
	level = pLevel;
	for (int i = 0; i < 18; i++)
	{
		if (pType == i)
		{
			type = PokeType(i);
		}
	}
	
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
	description = name + "\n";
	cout << description << endl << level;
	
}

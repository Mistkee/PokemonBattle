#include "Abilities.h"


Abilities::Abilities(string name, int dmg, PokeType type, int use)
{
	aName = name;
	dmgAmount = dmg;
	aType = type;
	nbUse = use;
}

void Abilities::DisplayName()
{
	cout << aName << endl ;

}

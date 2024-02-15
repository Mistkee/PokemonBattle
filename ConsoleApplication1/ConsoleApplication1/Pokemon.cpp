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
	SetPokemonStats(type);

	cout << "How many levels does it has ?" << endl;
	cin >> level;
	healthpoints = level * 3;

	
	description = "Pokemon name: " + name + "\n" + "Lvl: " + to_string(level) + "\n" + "HP: " + to_string(healthpoints);

	
}

void Pokemon::SetPokemonStats(PokeType abilityType)
{
	abilitiesSet.push_back(ChooseAbilities(type));
}

void Pokemon::Pokedex()
{
	cout << description << endl;
	for (int i = 0; i < abilitiesSet.size(); i++)
	{
		abilitiesSet[i].DisplayName();
	}
	
}
Abilities Pokemon::ChooseAbilities(PokeType pkmType)
{

	vector<Abilities> normalAbilities = { Abilities("Feint", 30, PokeType::Normal, 10), Abilities("Quick Attack", 40, PokeType::Normal, 30), Abilities("Headbutt", 70, PokeType::Normal, 15) };
	vector<Abilities> fireAbilities = { Abilities("Ember", 40, PokeType::Fire, 25), Abilities("Fire Spin", 35, PokeType::Fire, 15), Abilities("Flame Charge", 50, PokeType::Fire, 20) };
	vector<Abilities> waterAbilities = { Abilities("Bubble", 40, PokeType::Water, 30), Abilities("Clamp", 35, PokeType::Water, 15), Abilities("Water Pulse", 60, PokeType::Water, 20) };
	vector<Abilities> grassAbilities = { Abilities("Branch Poke", 40, PokeType::Grass, 40), Abilities("Snap Trap", 35, PokeType::Grass, 15), Abilities("Trailblaze", 50, PokeType::Grass, 20) };
	vector<Abilities> electricAbilities = { Abilities("Thunder Shock", 40, PokeType::Electric, 30), Abilities("Nuzzle", 20, PokeType::Electric, 20), Abilities("Discharge", 80, PokeType::Electric, 15) };
	vector<Abilities> iceAbilities = { Abilities("Ice Shard", 40, PokeType::Ice, 30), Abilities("Icy Wind", 55, PokeType::Ice, 15), Abilities("Avalanche", 60, PokeType::Ice, 10) };
	vector<Abilities> fightingAbilities = { Abilities("Mach Punch", 40, PokeType::Fighting, 30), Abilities("Rock Smash", 40, PokeType::Fighting, 15), Abilities("Power-Up Punch", 40, PokeType::Fighting, 20) };
	vector<Abilities> poisonAbilities = { Abilities("Acid", 40, PokeType::Poison, 30), Abilities("Smog", 30, PokeType::Poison, 20), Abilities("Barb Barrage", 50, PokeType::Poison, 15) };
	vector<Abilities>  groundAbilities = { Abilities("Bone Rush", 25, PokeType::Ground, 10), Abilities("Fire Spin", 35, PokeType::Fire, 15), Abilities("Flame Charge", 50, PokeType::Fire, 20) };
	vector<Abilities> flyingAbilities = { Abilities("Dual Wingbeat", 40, PokeType::Flying, 10), Abilities("Gust", 40, PokeType::Flying, 35), Abilities("Acrobatics", 55, PokeType::Flying, 15) };
	vector<Abilities> psychicAbilities = { Abilities("Twin Beam", 40, PokeType::Psychic, 25), Abilities("Stored Power", 20, PokeType::Psychic, 10), Abilities("Expanding Force", 80, PokeType::Psychic, 20) };
	vector<Abilities> bugAbilities = { Abilities("Fury Cutter", 40, PokeType::Bug, 20), Abilities("Twineedle", 25, PokeType::Bug, 20), Abilities("Silver Wind", 60, PokeType::Bug, 5) };
	vector<Abilities> rockAbilities = { Abilities("Accelerock", 40, PokeType::Rock, 20), Abilities("Salt Cure", 40, PokeType::Rock, 15), Abilities("Rock Throw", 50, PokeType::Rock, 15) };
	vector<Abilities> ghostAbilities = { Abilities("Shadow Sneak", 40, PokeType::Ghost, 30), Abilities("Lick", 30, PokeType::Ghost, 30), Abilities("Ominous Wind", 60, PokeType::Ghost, 5) };
	vector<Abilities> dragonAbilities = { Abilities("Dual Chop", 40, PokeType::Dragon, 15), Abilities("Scale Shot", 25, PokeType::Dragon, 20), Abilities("Dragon Breath", 60, PokeType::Dragon, 20) };
	vector<Abilities> darkAbilities = { Abilities("Pursuit", 40, PokeType::Dark, 20), Abilities("Power Trip", 20, PokeType::Dark, 10), Abilities("Knock Off", 65, PokeType::Dark, 20) };
	vector<Abilities> steelAbilities = { Abilities("Bullet Punch", 40, PokeType::Steel, 30), Abilities("Tachyon Cutter", 50, PokeType::Steel, 10), Abilities("Metal Claw", 50, PokeType::Steel, 35) };
	vector<Abilities> fairyAbilities = { Abilities("Disarming Voice", 40, PokeType::Fairy, 15), Abilities("Fairy Wind", 40, PokeType::Fairy, 15), Abilities("Draining Kiss", 50, PokeType::Fairy, 10) };
	int random = rand() % normalAbilities.size();

	switch (pkmType)
	{
	case (PokeType::Normal):

		return(normalAbilities[random]);
		break;
	case (PokeType::Fire):

		return(fireAbilities[random]);
		break;
	case (PokeType::Water):

		return(waterAbilities[random]);
		break;
	case (PokeType::Grass):

		return(grassAbilities[random]);
		break;
	case (PokeType::Electric):
		return(Abilities("Thunder Shock", 40, PokeType::Electric, 30));
		//return(electricAbilities[random]);
		break;
	case (PokeType::Ice):

		return(iceAbilities[random]);
		break;
	case (PokeType::Fighting):

		return(fightingAbilities[random]);
		break;
	case (PokeType::Poison):

		return(poisonAbilities[random]);
		break;
	case (PokeType::Ground):

		return(groundAbilities[random]);
		break;
	case (PokeType::Flying):

		return(flyingAbilities[random]);
		break;
	case (PokeType::Psychic):

		return(psychicAbilities[random]);
		break;
	case (PokeType::Bug):

		return(bugAbilities[random]);
		break;
	case (PokeType::Rock):

		return(rockAbilities[random]);
		break;
	case (PokeType::Ghost):

		return(ghostAbilities[random]);
		break;
	case (PokeType::Dragon):

		return(dragonAbilities[random]);
		break;
	case (PokeType::Dark):

		return(darkAbilities[random]);
		break;
	case (PokeType::Steel):

		return(steelAbilities[random]);
		break;
	case (PokeType::Fairy):

		return(fairyAbilities[random]);
		break;

	default:
		break;
	}

}
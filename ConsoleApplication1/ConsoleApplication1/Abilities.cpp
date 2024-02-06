#include "Abilities.h"


void Abilities::ChooseAbilities(PokeType pkmType, Pokemon pkm)
{
	
	vector<Abilities> normalAbilities = {Abilities("Feint", 30, PokeType::Normal, 10), Abilities("Quick Attack", 40, PokeType::Normal, 30), Abilities("Headbutt", 70, PokeType::Normal, 15) };
	vector<Abilities> fireAbilities = { Abilities("Ember", 40, PokeType::Fire, 25), Abilities("Fire Spin", 35, PokeType::Fire, 15), Abilities("Flame Charge", 50, PokeType::Fire, 20) };
	vector<Abilities> waterAbilities = { Abilities("Bubble", 40, PokeType::Water, 30), Abilities("Clamp", 35, PokeType::Water, 15), Abilities("Water Pulse", 60, PokeType::Water, 20) };
	vector<Abilities> grassAbilities = { Abilities("Branch Poke", 40, PokeType::Grass, 40), Abilities("Snap Trap", 35, PokeType::Grass, 15), Abilities("Trailblaze", 50, PokeType::Grass, 20) };
	vector<Abilities> electricAbilities = { Abilities("Thunder Shock", 40, PokeType::Electric, 30), Abilities("Nuzzle", 20, PokeType::Electric, 20), Abilities("Discharge", 80, PokeType::Electric, 15) };
	vector<Abilities> iceAbilities = { Abilities("Ice Shard", 40, PokeType::Ice, 30), Abilities("Icy Wind", 55, PokeType::Ice, 15), Abilities("Avalanche", 60, PokeType::Ice, 10) };
	vector<Abilities> fightingAbilities = { Abilities("Mach Punch", 40, PokeType::Fighting, 30), Abilities("Rock Smash", 40, PokeType::Fighting, 15), Abilities("Power-Up Punch", 40, PokeType::Fighting, 20) };
	vector<Abilities> poisonAbilities = { Abilities("Acid", 40, PokeType::Poison, 30), Abilities("Smog", 30, PokeType::Poison, 20), Abilities("Barb Barrage", 50, PokeType::Poison, 15)};
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


	switch (pkmType)
	{
	case (PokeType::Normal):
		
	case (PokeType::Fire) :

	case (PokeType::Water) :

	case (PokeType::Grass) :

	case (PokeType::Electric) :

	case (PokeType::Ice) :

	case (PokeType::Fighting) :

	case (PokeType::Poison) :

	case (PokeType::Ground):

	case (PokeType :: Flying) :

	case (PokeType::Psychic):

	case (PokeType::Bug):

	case (PokeType::Rock):

	case (PokeType::Ghost):

	case (PokeType::Dragon):

	case (PokeType::Dark):

	case (PokeType::Steel):

	case (PokeType::Fairy):


	default:
		break;
	}
	
}

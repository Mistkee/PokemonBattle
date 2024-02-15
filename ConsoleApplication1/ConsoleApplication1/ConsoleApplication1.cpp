#include <iostream>
#include <string>
#include "Battle.h";
using namespace std;

int main()
{
    srand(time(NULL));
    Trainer mainCharacter = Trainer();
    Battle battle = Battle(mainCharacter);
    battle.Adventure();
}


//
//void Forest(Trainer& mainCharacter)
//{   
//    vector<Pokemon>fabriceTeam = { Pokemon("Luvdisc", PokeType::Water, 60, (vector<Abilities> {Abilities("Bubble",40, PokeType :: Water, 30), Abilities("Clamp", 35, PokeType::Water, 15)}))};
//    Trainer fabrice = Trainer("Fabrice", "Laglisse", "Hum, I think I'm lost",fabriceTeam);
//    //Battle(fabrice, fabrice);
//}
//
//void Mountain(Trainer& mainCharacter)
//{
//
//}
//
//void AttractionPark(Trainer& mainCharacter)
//{
//
//}
//
//void Battle(Trainer& character, Trainer& challenger)
//{
//
//}
#include <iostream>
#include <string>
#include "Trainer.h";
using namespace std;

int main()
{

    /*cout << "What's the name of your Pokémon ?" << endl;
    string pName;
    cin >> pName;
    cout << "What's its type ? \n 0 : Normal \n 1 : Fire \n 2 : Water \n 3 : Grass : \n 4 : Electric \n 5 : Ice \n 6 : Fighting \n 7: Poison \n 8 : Ground \n 9 : Flying\n 10 : Psychic \n 11 : Bug \n 12 : Rock\n 13 : Ghost\n 14 : Dragon \n 15 : Dark\n 16 : Steel \n 17 : Fairy" << endl;
    int type;
    cin >> type;
    cout << "How much levels does it has ?" << endl;
    int level;
    cin >> level;
    Pokemon pokemon = Pokemon(pName, type, level);
    pokemon.Pokedex();*/

    Trainer mainCharacter = Trainer();

    mainCharacter.Introduction();



}

//void Adventure(Trainer& mainCharacter)
//{
//    cout << "You decided to explore the world with your companion(s), what will be your next stop ? \n 0 : The quiet forest \n 1 : The mountain trail \n 2 : The noisy attraction park \n";
//    int path;
//    cin >> path;
//    switch (path)
//    {
//    case(0):
//        //Forest(mainCharacter);
//        break;
//    case(1):
//        //Mountain(mainCharacter);
//        break;
//    case(2):
//        //AttractionPark(mainCharacter);
//
//    default:
//        break;
//    }
//
//}
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
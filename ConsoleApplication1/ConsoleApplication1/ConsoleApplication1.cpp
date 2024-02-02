#include <iostream>
#include "Pokemon.h";
using namespace std;

int main()
{
    

    cout << "What's the name of your Pokémon ?" << endl;
    string pName;
    cin >> pName;
    cout << "What's its type ? \n 0 : Normal \n 1 : Fire \n 2 : Water \n 3 : Grass : \n 4 : Electric \n 5 : Ice \n 6 : Fighting \n 7: Poison \n 8 : Ground \n 9 : Flying\n 10 : Psychic \n 11 : Bug \n 12 : Rock\n 13 : Ghost\n 14 : Dragon \n 15 : Dark\n 16 : Steel \n 17 : Fairy" << endl;
    int type;
    cin >> type;
    cout << "How much levels does it has ?" << endl;
    int level;
    cin >> level;
    Pokemon pokemon = Pokemon(pName, type, level);
    pokemon.Pokedex();
}


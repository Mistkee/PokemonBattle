#include <iostream>
#include "Pokemon.h";
using namespace std;

int main()
{
    

    cout << "What's the name of your Pokémon ?" << endl;
    string pName;
    cin >> pName;
    cout << "What's its type ?" << endl;
    string type;
    cin >> type;
    cout << "How much levels does it has ?" << endl;
    int level;
    cin >> level;
    Pokemon pokemon = Pokemon(pName, type, level);
    pokemon.Pokedex();
}


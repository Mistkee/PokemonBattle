#include "Battle.h"

Battle::Battle(Trainer& maincharacter) : mainCharacter( maincharacter)
{
}

void Battle::Adventure(Trainer& mainCharacter)
{
    cout << "You decided to explore the world with your companion(s), what will be your next stop ? \n 0 : Challenge another Trainer \n 1 : Capture a wild Pokemon \n 2 : Rest \n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case(0):
        ChallengeTrainer(mainCharacter);
        break;
    case(1):
        
        break;
    case(2):
        

    default:
        break;
    }

}

void Battle::ChallengeTrainer(Trainer& mainCharacter)
{
    vector<Pokemon>fabriceTeam = { Pokemon("Luvdisc", PokeType::Water, 60, (vector<Abilities> {Abilities("Bubble",40, PokeType::Water, 30), Abilities("Clamp", 35, PokeType::Water, 15)})) };
    Trainer fabrice = Trainer("Fabrice", "Laglisse", "Hum, I think I'm lost",fabriceTeam);
}
